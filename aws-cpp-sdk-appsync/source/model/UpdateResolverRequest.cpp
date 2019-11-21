﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/appsync/model/UpdateResolverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResolverRequest::UpdateResolverRequest() : 
    m_apiIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_requestMappingTemplateHasBeenSet(false),
    m_responseMappingTemplateHasBeenSet(false),
    m_kind(ResolverKind::NOT_SET),
    m_kindHasBeenSet(false),
    m_pipelineConfigHasBeenSet(false),
    m_syncConfigHasBeenSet(false),
    m_cachingConfigHasBeenSet(false)
{
}

Aws::String UpdateResolverRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("dataSourceName", m_dataSourceName);

  }

  if(m_requestMappingTemplateHasBeenSet)
  {
   payload.WithString("requestMappingTemplate", m_requestMappingTemplate);

  }

  if(m_responseMappingTemplateHasBeenSet)
  {
   payload.WithString("responseMappingTemplate", m_responseMappingTemplate);

  }

  if(m_kindHasBeenSet)
  {
   payload.WithString("kind", ResolverKindMapper::GetNameForResolverKind(m_kind));
  }

  if(m_pipelineConfigHasBeenSet)
  {
   payload.WithObject("pipelineConfig", m_pipelineConfig.Jsonize());

  }

  if(m_syncConfigHasBeenSet)
  {
   payload.WithObject("syncConfig", m_syncConfig.Jsonize());

  }

  if(m_cachingConfigHasBeenSet)
  {
   payload.WithObject("cachingConfig", m_cachingConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




