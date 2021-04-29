#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

	class space_age {
	private:
		const double AgeSec;
		const double Earth_year = 31557600;

		const double Mercury_year = Earth_year * 0.2408467;
		const double Venus_year = Earth_year * 0.61519726;
		const double Mars_year = Earth_year * 1.8808158;
		const double Jupiter_year = Earth_year * 11.862615;
		const double Saturn_year = Earth_year * 29.447498;
		const double Uranus_year = Earth_year * 84.016846;
		const double Neptune_year = Earth_year * 164.79132;
			
	public:
		space_age(long long int age) : AgeSec(age) {};

		long seconds() const { return AgeSec; }

		double on_mercury() const { return AgeSec / Mercury_year; }
		double on_venus() const { return AgeSec / Venus_year; }
		double on_earth() const { return AgeSec / Earth_year; }
		double on_mars() const { return AgeSec / Mars_year; }
		double on_jupiter() const { return AgeSec / Jupiter_year; }
		double on_saturn() const { return AgeSec / Saturn_year; }
		double on_uranus() const { return AgeSec / Uranus_year; }
		double on_neptune() const { return AgeSec / Neptune_year; }

	};
}// namespace space_age

#endif // SPACE_AGE_H