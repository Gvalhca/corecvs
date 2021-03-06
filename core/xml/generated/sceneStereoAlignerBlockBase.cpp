/**
 * \file sceneStereoAlignerBlockBase.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from bufferFilters.xml
 */

#include <vector>
#include <stddef.h>
#include "sceneStereoAlignerBlockBase.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
#if 0
template<>
Reflection BaseReflection<SceneStereoAlignerBlockBase>::reflection = Reflection();
template<>
int BaseReflection<SceneStereoAlignerBlockBase>::dummy = SceneStereoAlignerBlockBase::staticInit();
#endif
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN


using namespace corecvs;

int SceneStereoAlignerBlockBase::staticInit(corecvs::Reflection *toFill)
{
    if (toFill == NULL || toFill->objectSize != 0) {
        SYNC_PRINT(("staticInit(): Contract Violation in <SceneStereoAlignerBlockBase>\n"));
         return -1;
    }

    toFill->name = ReflectionNaming(
        "SceneStereoAlignerBlockBase",
        "SceneStereoAlignerBlockBase",
        ""
    );

     toFill->objectSize = sizeof(SceneStereoAlignerBlockBase);
     

    PointerField* field0 = new PointerField
        (
          SceneStereoAlignerBlockBase::INSCENE_ID,
          offsetof(SceneStereoAlignerBlockBase, mInScene),
          NULL,
          "inScene",
          "inScene",
          "inScene",
          "corecvs::FixtureScene"
        );
    toFill->fields.push_back(field0);
    /*  */ 
    IntField* field1 = new IntField
        (
          SceneStereoAlignerBlockBase::INFIXTURE1_ID,
          offsetof(SceneStereoAlignerBlockBase, mInFixture1),
          0,
          "inFixture1",
          "inFixture1",
          "fixture1"
        );
    toFill->fields.push_back(field1);
    /*  */ 
    IntField* field2 = new IntField
        (
          SceneStereoAlignerBlockBase::INCAMERA1_ID,
          offsetof(SceneStereoAlignerBlockBase, mInCamera1),
          0,
          "inCamera1",
          "inCamera1",
          "camera1"
        );
    toFill->fields.push_back(field2);
    /*  */ 
    IntField* field3 = new IntField
        (
          SceneStereoAlignerBlockBase::INFIXTURE2_ID,
          offsetof(SceneStereoAlignerBlockBase, mInFixture2),
          0,
          "inFixture2",
          "inFixture2",
          "fixture2"
        );
    toFill->fields.push_back(field3);
    /*  */ 
    IntField* field4 = new IntField
        (
          SceneStereoAlignerBlockBase::INCAMERA2_ID,
          offsetof(SceneStereoAlignerBlockBase, mInCamera2),
          0,
          "inCamera2",
          "inCamera2",
          "camera2"
        );
    toFill->fields.push_back(field4);
    /*  */ 
    CompositeField* field5 = new CompositeField
        (
          SceneStereoAlignerBlockBase::PARAMETERS_ID,
          offsetof(SceneStereoAlignerBlockBase, mParameters),
          "parameters",
          "StereoAlignParameters",
          "parameters",
          "parameters",
           NULL
        );
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("Stereo Align Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             field5->reflection = it->second;
        } else {
             printf("Reflection SceneStereoAlignerBlockBase to the subclass Stereo Align Parameters can't be linked\n");
        }
    }
    toFill->fields.push_back(field5);
    /*  */ 
    PointerField* field6 = new PointerField
        (
          SceneStereoAlignerBlockBase::INIMAGE1_ID,
          offsetof(SceneStereoAlignerBlockBase, mInImage1),
          NULL,
          "inImage1",
          "inImage1",
          "inImage1",
          "corecvs::RGB24Buffer"
        );
    toFill->fields.push_back(field6);
    /*  */ 
    PointerField* field7 = new PointerField
        (
          SceneStereoAlignerBlockBase::INIMAGE2_ID,
          offsetof(SceneStereoAlignerBlockBase, mInImage2),
          NULL,
          "inImage2",
          "inImage2",
          "inImage2",
          "corecvs::RGB24Buffer"
        );
    toFill->fields.push_back(field7);
    /*  */ 
    PointerField* field8 = new PointerField
        (
          SceneStereoAlignerBlockBase::OUTIMAGE1_ID,
          offsetof(SceneStereoAlignerBlockBase, mOutImage1),
          NULL,
          "outImage1",
          "outImage1",
          "outImage1",
          "corecvs::RGB24Buffer"
        );
    toFill->fields.push_back(field8);
    /*  */ 
    PointerField* field9 = new PointerField
        (
          SceneStereoAlignerBlockBase::OUTIMAGE2_ID,
          offsetof(SceneStereoAlignerBlockBase, mOutImage2),
          NULL,
          "outImage2",
          "outImage2",
          "outImage2",
          "corecvs::RGB24Buffer"
        );
    toFill->fields.push_back(field9);
    /*  */ 
    PointerField* field10 = new PointerField
        (
          SceneStereoAlignerBlockBase::OUTCAMERA1_ID,
          offsetof(SceneStereoAlignerBlockBase, mOutCamera1),
          NULL,
          "outCamera1",
          "outCamera1",
          "outCamera1",
          "corecvs::FixtureCamera"
        );
    toFill->fields.push_back(field10);
    /*  */ 
    PointerField* field11 = new PointerField
        (
          SceneStereoAlignerBlockBase::OUTCAMERA2_ID,
          offsetof(SceneStereoAlignerBlockBase, mOutCamera2),
          NULL,
          "outCamera2",
          "outCamera2",
          "outCamera2",
          "corecvs::FixtureCamera"
        );
    toFill->fields.push_back(field11);
    /*  */ 
    ReflectionDirectory &directory = *ReflectionDirectoryHolder::getReflectionDirectory();
    directory[std::string("SceneStereoAlignerBlockBase")]= toFill;
   return 0;
}
int SceneStereoAlignerBlockBase::relinkCompositeFields()
{
    {
        ReflectionDirectory* directory = ReflectionDirectoryHolder::getReflectionDirectory();
        std::string name("Stereo Align Parameters");
        ReflectionDirectory::iterator it = directory->find(name);
        if(it != directory->end()) {
             const CompositeField* field = static_cast<const CompositeField*>(getReflection()->fields[5]);
             const_cast<CompositeField*>(field)->reflection = it->second;
        } else {
             printf("Reflection SceneStereoAlignerBlockBase to the subclass Stereo Align Parameters can't be linked\n");
        }
    }
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


