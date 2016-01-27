//  MOCHC.h
//  //
//  //  Author:
//	 Some phylogenetic features were added by Cristian Zambrano-Vega
//       <czambrano@uteq.edu.ec>
//
//  //  Copyright (c) 2011 Antonio J. Nebro, Juan J. Durillo
//  //
//  //  This program is free software: you can redistribute it and/or modify
//  //  it under the terms of the GNU Lesser General Public License as published by
//  //  the Free Software Foundation, either version 3 of the License, or
//  //  (at your option) any later version.
//  //
//  //  This program is distributed in the hope that it will be useful,
//  //  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  //  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  //  GNU Lesser General Public License for more details.
//  //
//  //  You should have received a copy of the GNU Lesser General Public License
//  //  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <Algorithm.h>
#include <Problem.h>
#include <SolutionSet.h>
#include <Distance.h>
#include <Ranking.h>
#include <Distance.h>
#include <Binary.h>
#include <Solution.h>
#include <CrowdingComparator.h>
#include <cmath>
#include <iostream>
#include <Phylogeny.h>

#include <Bpp/Phyl/Node.h>
#include <Bpp/Phyl/TreeTemplate.h>
#include <Bpp/Phyl/TreeTemplateTools.h>
#include <Bpp/Phyl/TreeTools.h>

class PhyloMOCHC : public Algorithm {
	bool equals(SolutionSet& set1, SolutionSet& set2);
	int hammingDistance(Solution &sol1, Solution& sol2);
	SolutionSet *rankingAndCrowdingSelection(SolutionSet *sol,int size);
	int RFDistance(Solution *sol1, Solution *sol2);

public:
	PhyloMOCHC(Problem * problem) : Algorithm(problem){};
	SolutionSet *execute();
};
