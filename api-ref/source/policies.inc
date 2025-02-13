.. -*- rst -*-

===================
Policies (policies)
===================

Lists all policies and creates, shows information for, updates, and deletes a
policy.

List policies
=============

.. rest_method::  GET /v1/policies

Lists all policies.

Normal response codes: 200

Error response codes:

- badRequest (400)
- unauthorized (401)
- forbidden (403)
- serviceUnvailable (503)

Request Parameters
------------------

.. rest_parameters:: parameters.yaml

  - OpenStack-API-Version: microversion
  - limit: limit
  - marker: marker
  - sort: sort
  - global_project: global_project
  - name: name_query
  - type: type_query

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

  - policies: policies
  - created_at: created_at
  - data: policy_data
  - domain: domain
  - id: policy_id
  - metadata: metadata
  - name: name
  - project: project
  - spec: policy_spec
  - type: policy_type_property
  - updated_at: updated_at
  - user: user

Response Example
----------------

.. literalinclude:: samples/policy-list-response.json
   :language: javascript


Create policy
==============

.. rest_method::  POST /v1/policies

Creates a policy.

Normal response codes: 201

Error response codes:

- badRequest (400)
- unauthorized (401)
- forbidden (403)
- serviceUnvailable (503)

Request Parameters
------------------

.. rest_parameters:: parameters.yaml

  - OpenStack-API-Version: microversion
  - policy: policy
  - name: name
  - spec: policy_spec

Request Example
---------------

.. literalinclude:: samples/policy-create-request.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

  - policy: policy
  - created_at: created_at
    in: policy
  - data: policy_data
  - domain: domain
    in: policy
  - id: policy_id
  - name: name
    in: policy
  - project: project
    in: policy
  - spec: policy_spec
  - type: policy_type_property
  - updated_at: updated_at
    in: policy
  - user: user
    in: policy

Response Example
----------------

.. literalinclude:: samples/policy-create-response.json
   :language: javascript


Show policy details
====================

.. rest_method::  GET /v1/policies/{policy_id}

Shows details for a policy.

Normal response codes: 200

Error response codes:

- badRequest (400)
- unauthorized (401)
- forbidden (403)
- notFound(404)
- serviceUnvailable (503)

Request Parameters
------------------

.. rest_parameters:: parameters.yaml

  - OpenStack-API-Version: microversion
  - policy_id: policy_id_url

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

  - policy: policy
  - created_at: created_at
  - data: policy_data
  - domain: domain
  - id: policy_id
  - name: name
  - project: project
  - spec: policy_spec
  - type: policy_type_property
  - updated_at: updated_at
  - user: user

Response Example
----------------

.. literalinclude:: samples/policy-show-response.json
   :language: javascript


Update policy
==============

.. rest_method::  PATCH /v1/policies/{policy_id}

Updates a policy.

Normal response codes: 200

Error response codes:

- badRequest (400)
- unauthorized (401)
- forbidden (403)
- notFound(404)
- serviceUnvailable (503)

Request Parameters
------------------

.. rest_parameters:: parameters.yaml

  - OpenStack-API-Version: microversion
  - policy_id: policy_id_url
  - policy: policy
  - name: name
    in: policy

Request Example
---------------

.. literalinclude:: samples/policy-update-request.json
   :language: javascript


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

  - policy: policy
  - created_at: created_at
  - data: policy_data
  - domain: domain
    in: policy
  - id: policy_id
  - name: name
    in: policy
  - project: project
    in: policy
  - spec: policy_spec
  - type: policy_type_property
  - updated_at: updated_at
    in: policy
  - user: user
    in: policy

Response Example
----------------

.. literalinclude:: samples/policy-update-response.json
   :language: javascript


Delete policy
==============

.. rest_method::  DELETE /v1/policies/{policy_id}

Deletes a policy.

Normal response codes: 204

Error response codes:

- badRequest (400)
- unauthorized (401)
- forbidden (403)
- notFound(404)
- conflict(409)
- serviceUnvailable (503)

Request Parameters
------------------

.. rest_parameters:: parameters.yaml

  - OpenStack-API-Version: microversion
  - policy_id: policy_id_url
