#ifndef INTERACTIONDATA_H
#define INTERACTIONDATA_H

#include <TParticlePDG.h>
#include <TDatabasePDG.h>

#include <string>
#include <cmath>

namespace NeutrinoFluxReweight{
  
    /*! \class InteractionData
   *  \brief The information about a hadronic interaction needed to calculate weights.

   Information about the kinematics of the interaction, the identity of the projectile and target, the producted particles, etc. This looks like KinProd to me.
   
 */
  class InteractionData{ 
 
  public:

    //!Default Constructor
    InteractionData();

    //! Constructor given kinematic of the interaction.
    InteractionData(double incMom[], int incPdg, double prodMom[], int prodPdg, std::string volname, std::string procname);

    virtual ~InteractionData();
    
    //! pdg code of the incident particle
    int Inc_pdg;

    //! pdg code of the produced particle
    int Prod_pdg;
    
    //! Momentum magnitude of the incident particle
    double Inc_P;
   
    //! Momentum magnitude of the produced particle
    double Prod_P;

    //! Mass of the incident particle
    double Inc_Mass;

    //!  Mass of the produced particle
    double Prod_Mass; 

    //! Feynmann-x of the produced particle: \f$ x_{F} = 2P_{L}/\sqrt(s) \f$ 
    double xF;

    //! Longitudinal momentum (GeV/c) of the produced particle 
    double Pz; 

    //! Angle (rad) of the produced particle 
    double Theta;

    //! Transversal momentum (GeV/c) of the produced particle 
    double Pt;

    //! Center of mass energy of the collision indident particle - nuclear proton. 
    double Ecm;

    //! \f$ \beta_{CM} \f$ 
    double Betacm;

    //! \f$ \gamma_{CM} \f$ 
    double Gammacm;

    //! Interaction volume 
    std::string Vol;

    //! Interaction process
    std::string Proc;

  private:
    TDatabasePDG* particle;
    
  };

  
};
#endif
