# coding=utf-8
"""
This code was generated by
\ / _    _  _|   _  _
 | (_)\/(_)(_|\/| |(/_  v1.0.0
      /       /
"""

from tests import IntegrationTestCase
from tests.holodeck import Request
from twilio.base.exceptions import TwilioException
from twilio.http.response import Response


class WorkerStatisticsTestCase(IntegrationTestCase):

    def test_fetch_request(self):
        self.holodeck.mock(Response(500, ''))

        with self.assertRaises(TwilioException):
            self.client.taskrouter.v1.workspaces(sid="WSXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX") \
                                     .workers(sid="WKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX") \
                                     .statistics().fetch()

        self.holodeck.assert_has_request(Request(
            'get',
            'https://taskrouter.twilio.com/v1/Workspaces/WSXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX/Workers/WKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX/Statistics',
        ))

    def test_fetch_response(self):
        self.holodeck.mock(Response(
            200,
            '''
            {
                "cumulative": {
                    "reservations_created": 100,
                    "reservations_accepted": 100,
                    "reservations_rejected": 100,
                    "reservations_timed_out": 100,
                    "reservations_canceled": 100,
                    "reservations_rescinded": 100,
                    "activity_durations": [
                        {
                            "max": 0,
                            "min": 900,
                            "sid": "WAaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                            "friendly_name": "Offline",
                            "avg": 1080,
                            "total": 5400
                        },
                        {
                            "max": 0,
                            "min": 900,
                            "sid": "WAaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                            "friendly_name": "Busy",
                            "avg": 1012,
                            "total": 8100
                        },
                        {
                            "max": 0,
                            "min": 0,
                            "sid": "WAaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                            "friendly_name": "Idle",
                            "avg": 0,
                            "total": 0
                        },
                        {
                            "max": 0,
                            "min": 0,
                            "sid": "WAaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                            "friendly_name": "Reserved",
                            "avg": 0,
                            "total": 0
                        }
                    ],
                    "start_time": "2008-01-02T00:00:00Z",
                    "end_time": "2008-01-02T00:00:00Z"
                },
                "account_sid": "ACaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                "workspace_sid": "WSaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                "worker_sid": "WKaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
                "url": "https://taskrouter.twilio.com/v1/Workspaces/WSaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa/Workers/WKaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa/Statistics"
            }
            '''
        ))

        actual = self.client.taskrouter.v1.workspaces(sid="WSXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX") \
                                          .workers(sid="WKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX") \
                                          .statistics().fetch()

        self.assertIsNotNone(actual)
