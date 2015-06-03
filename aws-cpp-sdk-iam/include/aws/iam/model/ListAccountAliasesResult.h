/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    <p>Contains the response to a successful <a>ListAccountAliases</a> request. </p>
  */
  class AWS_IAM_API ListAccountAliasesResult
  {
  public:
    ListAccountAliasesResult();
    ListAccountAliasesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListAccountAliasesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>A list of aliases associated with the account.</p>
    */
    inline const Aws::Vector<Aws::String>& GetAccountAliases() const{ return m_accountAliases; }
    /*
     <p>A list of aliases associated with the account.</p>
    */
    inline void SetAccountAliases(const Aws::Vector<Aws::String>& value) { m_accountAliases = value; }

    /*
     <p>A list of aliases associated with the account.</p>
    */
    inline ListAccountAliasesResult&  WithAccountAliases(const Aws::Vector<Aws::String>& value) { SetAccountAliases(value); return *this;}

    /*
     <p>A list of aliases associated with the account.</p>
    */
    inline ListAccountAliasesResult& AddAccountAliases(const Aws::String& value) { m_accountAliases.push_back(value); return *this; }

    /*
     <p>A list of aliases associated with the account.</p>
    */
    inline ListAccountAliasesResult& AddAccountAliases(const char* value) { m_accountAliases.push_back(value); return *this; }

    /*
     <p> A flag that indicates whether there are more account aliases to list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more account aliases in the list. </p>
    */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    /*
     <p> A flag that indicates whether there are more account aliases to list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more account aliases in the list. </p>
    */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /*
     <p> A flag that indicates whether there are more account aliases to list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more account aliases in the list. </p>
    */
    inline ListAccountAliasesResult&  WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /*
     <p> Use this only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    /*
     <p> Use this only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /*
     <p> Use this only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /*
     <p> Use this only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline ListAccountAliasesResult&  WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p> Use this only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline ListAccountAliasesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListAccountAliasesResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_accountAliases;
    bool m_isTruncated;
    Aws::String m_marker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws