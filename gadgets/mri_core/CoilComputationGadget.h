/** \file   CoilComputationGadget.h
    \brief  This Gadget computes coil senstivities based on image data.
    \author Johannes Mayer
*/

#pragma once

#include "gadgetron/Gadget.h"
#include "gadgetron/hoNDArray.h"

#include "ismrmrd/meta.h"
#include <ismrmrd/ismrmrd.h>

#include "gadgetron_mricore_export.h"



namespace Gadgetron
{
    class EXPORTGADGETSMRICORE CoilComputationGadget :public Gadget2<ISMRMRD::ImageHeader, hoNDArray< std::complex<float> > >
    {
    public:

        GADGET_DECLARE(CoilComputationGadget);

        typedef std::complex<float> ValueType;
        typedef hoNDArray< ValueType > ArrayType;

        CoilComputationGadget();
        virtual ~CoilComputationGadget();


    protected:
        virtual int process(GadgetContainerMessage<ISMRMRD::ImageHeader>* m1, GadgetContainerMessage<ArrayType>* m2);
    };
}
