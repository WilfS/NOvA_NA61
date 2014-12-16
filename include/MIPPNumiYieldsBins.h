#ifndef MIPPNUMIYIELDSBINS_H
#define MIPPNUMIYIELDSBINS_H

#include <utility>
#include <map>
#include <vector>

namespace NeutrinoFluxReweight{
  
  /*! \class MIPPNumiYieldsBins
   *  \brief A class to manage the bin definitions for MIPP Numi Yields
   */
  class MIPPNumiYieldsBins{
  public:
    
    MIPPNumiYieldsBins();
    static MIPPNumiYieldsBins* getInstance();
    
    //! Read a xml pip file name to parse the bins
    void readPIP_FromXML(const char* filename);

    //! Read a xml pim file name to parse the bins
    void readPIM_FromXML(const char* filename);

    //! Return the Bin ID for this data
    int BinID(double pz,double pt, int pdgcode);
    
    std::vector<double> pip_pzmin, pim_pzmin;
    std::vector<double> pip_pzmax, pim_pzmax;
    std::vector<double> pip_ptmin, pim_ptmin;
    std::vector<double> pip_ptmax, pim_ptmax;

    private:
    static MIPPNumiYieldsBins* instance;

  };

  
  
};
#endif
