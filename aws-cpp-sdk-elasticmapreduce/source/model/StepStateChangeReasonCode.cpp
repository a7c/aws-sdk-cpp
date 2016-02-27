/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticmapreduce/model/StepStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>

using namespace Aws::Utils;

static const int NONE_HASH = HashingUtils::HashString("NONE");

namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace StepStateChangeReasonCodeMapper
      {


        StepStateChangeReasonCode GetStepStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return StepStateChangeReasonCode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = g_enumOverflow.load();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepStateChangeReasonCode>(hashCode);
          }

          return StepStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForStepStateChangeReasonCode(StepStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case StepStateChangeReasonCode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = g_enumOverflow.load();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StepStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
