/*
 * Reflection.h
 *
 *  Created on: 14.06.2010
 *      Author: fkrauthan
 */

#ifndef REFLECTION_H_
#define REFLECTION_H_

#include "ReflectionClass.h"
#include <string>
#include <map>


class Reflection {
	public:
		Reflection();
		~Reflection();

		void registerClass(ReflectionClass* refClass);
		ReflectionClass* getClass(const std::string& name);
		template <typename T> ReflectionClass* getClass();

		ReflectionClass* getClassByTypeId(const std::string& typeId);

	public:
		static Reflection& getInstance();

	private:
		std::map<std::string, ReflectionClass*> mRegisteredClasses;
		std::map<std::string, ReflectionClass*> mRegisteredClassesByTypeId;
};


#include "Reflection.h"

#endif /* REFLECTION_H_ */