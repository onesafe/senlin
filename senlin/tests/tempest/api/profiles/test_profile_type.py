# Licensed under the Apache License, Version 2.0 (the "License"); you may
# not use this file except in compliance with the License. You may obtain
# a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
# License for the specific language governing permissions and limitations
# under the License.

from tempest.lib import decorators

from senlin.tests.tempest.api import base


class TestProfileType(base.BaseSenlinTest):

    @decorators.idempotent_id('fa0cf9e3-5b75-4d4d-9a0f-1748772b65d3')
    def test_profile_type_list(self):
        res = self.client.list_objs('profile-types')

        # Verify resp of profile type list API
        self.assertEqual(200, res['status'])
        self.assertIsNotNone(res['body'])
        profile_types = res['body']
        for profile_type in profile_types:
            self.assertIn('name', profile_type)

    @decorators.idempotent_id('198165b3-1c1f-4801-8918-90c1adbf57c8')
    def test_profile_type_show(self):
        res = self.client.get_obj('profile-types', 'os.nova.server-1.0')

        # Verify resp of profile type show API
        self.assertEqual(200, res['status'])
        self.assertIsNotNone(res['body'])
        profile_type = res['body']
        for key in ['name', 'schema']:
            self.assertIn(key, profile_type)
        self.assertEqual('os.nova.server-1.0', profile_type['name'])
