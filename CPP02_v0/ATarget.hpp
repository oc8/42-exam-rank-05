#pragma once

#include <iostream>


class ATarget {
	private:
		std::string name;
		std::string effects;
	public:
		ATarget();
		ATarget(std::string const &name, std::string const &effects);
		ATarget(const ATarget const &other);
		ATarget &operator=(ATarget const &atarget_ref) const;
		virtual ~ATarget();

		std::string const &getName() const;
		std::string const &getEffects() const;

		void launch(ATarget const &atarget_ref) const;

		virtual ATarget *clone() const = 0;
};

