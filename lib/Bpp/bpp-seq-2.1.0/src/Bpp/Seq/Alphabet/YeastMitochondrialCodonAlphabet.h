//
// File: YeastbrateMitochondrialCodonAlphabet.h
// Created by: Benoit Nabholz
// Created on: Sun Oct 10 14:33 CET 2010
//

/*
Copyright or © or Copr. CNRS, (November 17, 2004)

This software is a computer program whose purpose is to provide classes
for sequences analysis.

This software is governed by the CeCILL  license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.
*/

#ifndef _YEASTMITOCHONDRIALCODONALPHABET_H_
#define _YEASTMITOCHONDRIALCODONALPHABET_H_


#include "CodonAlphabet.h"

namespace bpp
{

/**
 * @brief This class implements the Yeast
 * @author Laurent Guéguen
 *
 * Mitochondrial codon alphabet as describe on the NCBI website:
 * http://www.ncbi.nlm.nih.gov/Taxonomy/Utils/wprintgc.cgi?mode=t#SG3
 */
class YeastMitochondrialCodonAlphabet:
  public CodonAlphabet
{
public:
  YeastMitochondrialCodonAlphabet(const NucleicAlphabet * alpha);
  virtual ~YeastMitochondrialCodonAlphabet() {};
	
public:

  std::string getAlphabetType() const
  {
    return "Codon alphabet: YeastMitochondrial(" + vAbsAlph_[0]->getAlphabetType() + ")";
  }

};

} //end of namespace bpp.

#endif	//_YEASTMITOCHONDRIALCODONALPHABET_H_

