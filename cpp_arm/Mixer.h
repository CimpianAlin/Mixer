/*
 * This file is protected by Copyright. Please refer to the COPYRIGHT file
 * distributed with this source distribution.
 *
 * This file is part of REDHAWK.
 *
 * REDHAWK is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * REDHAWK is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */

#ifndef MAYBEAMIXER_IMPL_H
#define MAYBEAMIXER_IMPL_H

#include "Mixer_base.h"

class Mixer_i;

class Mixer_i : public Mixer_base
{
    ENABLE_LOGGING
    public: 
        Mixer_i(const char *uuid, const char *label);
        ~Mixer_i();
        int serviceFunction();
    private:
        std::vector<float> m_output;

        unsigned int m_lastSize;

        void sizeOutput(unsigned int currentSize);
};

#endif
