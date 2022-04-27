#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &name, std::string const &effects)
{
	this->name = name;
	this->effects = effects;
}

ATarget::ATarget(ATarget const &other) {*this = other;}

ATarget &ATarget::operator=(ATarget const &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ATarget::~ATarget() {}

std::string const &ATarget::getName() const {return this->name;}

std::string const &ATarget::getEffects() const {return this->effects;}

void ATarget::launch(ATarget const &atarget_ref) const {
	atarget_ref.getHitBySpell((*this));
}
