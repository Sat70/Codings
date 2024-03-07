# coding=utf-8
"""
This code was generated by
\ / _    _  _|   _  _
 | (_)\/(_)(_|\/| |(/_  v1.0.0
      /       /
"""

from twilio.base import deserialize
from twilio.base import values
from twilio.base.instance_context import InstanceContext
from twilio.base.instance_resource import InstanceResource
from twilio.base.list_resource import ListResource
from twilio.base.page import Page
from twilio.rest.messaging.v1.service.alpha_sender import AlphaSenderList
from twilio.rest.messaging.v1.service.phone_number import PhoneNumberList
from twilio.rest.messaging.v1.service.short_code import ShortCodeList


class ServiceList(ListResource):
    """ PLEASE NOTE that this class contains beta products that are subject to
    change. Use them with caution. """

    def __init__(self, version):
        """
        Initialize the ServiceList

        :param Version version: Version that contains the resource

        :returns: twilio.rest.messaging.v1.service.ServiceList
        :rtype: twilio.rest.messaging.v1.service.ServiceList
        """
        super(ServiceList, self).__init__(version)

        # Path Solution
        self._solution = {}
        self._uri = '/Services'.format(**self._solution)

    def create(self, friendly_name, inbound_request_url=values.unset,
               inbound_method=values.unset, fallback_url=values.unset,
               fallback_method=values.unset, status_callback=values.unset,
               sticky_sender=values.unset, mms_converter=values.unset,
               smart_encoding=values.unset, scan_message_content=values.unset,
               fallback_to_long_code=values.unset, area_code_geomatch=values.unset,
               validity_period=values.unset, synchronous_validation=values.unset):
        """
        Create a new ServiceInstance

        :param unicode friendly_name: A human readable descriptive text for this resource, up to 64 characters.
        :param unicode inbound_request_url: A webhook request is made to the Inbound Request URL when a message is received by any phone number or shortcode associated to your Messaging Service.
        :param unicode inbound_method: The HTTP method used when making requests to the Inbound Request URL.
        :param unicode fallback_url: A request is made to the Fallback URL if an error occurs with retrieving or executing the TwiML from you Inbound Request URL.
        :param unicode fallback_method: The HTTP method used when requesting the Fallback URL.
        :param unicode status_callback: A webhook request is made to the Status Callback to pass status updates about your messages.
        :param bool sticky_sender: Configuration to enable or disable Sticky Sender on your Service Instance.
        :param bool mms_converter: Configuration to enable or disable MMS Converter on your Service Instance.
        :param bool smart_encoding: Configuration to enable or disable Smart Encoding.
        :param ServiceInstance.ScanMessageContent scan_message_content: The scan_message_content
        :param bool fallback_to_long_code: Configuration to enable or disable Fallback to Long Code.
        :param bool area_code_geomatch: Configuration to enable or disable Area Code Geomatch.
        :param unicode validity_period: Configuration to set the validity period of all messages sent from your Service, in seconds.
        :param bool synchronous_validation: The synchronous_validation

        :returns: Newly created ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceInstance
        """
        data = values.of({
            'FriendlyName': friendly_name,
            'InboundRequestUrl': inbound_request_url,
            'InboundMethod': inbound_method,
            'FallbackUrl': fallback_url,
            'FallbackMethod': fallback_method,
            'StatusCallback': status_callback,
            'StickySender': sticky_sender,
            'MmsConverter': mms_converter,
            'SmartEncoding': smart_encoding,
            'ScanMessageContent': scan_message_content,
            'FallbackToLongCode': fallback_to_long_code,
            'AreaCodeGeomatch': area_code_geomatch,
            'ValidityPeriod': validity_period,
            'SynchronousValidation': synchronous_validation,
        })

        payload = self._version.create(
            'POST',
            self._uri,
            data=data,
        )

        return ServiceInstance(self._version, payload, )

    def stream(self, limit=None, page_size=None):
        """
        Streams ServiceInstance records from the API as a generator stream.
        This operation lazily loads records as efficiently as possible until the limit
        is reached.
        The results are returned as a generator, so this operation is memory efficient.

        :param int limit: Upper limit for the number of records to return. stream()
                          guarantees to never return more than limit.  Default is no limit
        :param int page_size: Number of records to fetch per request, when not set will use
                              the default value of 50 records.  If no page_size is defined
                              but a limit is defined, stream() will attempt to read the
                              limit with the most efficient page size, i.e. min(limit, 1000)

        :returns: Generator that will yield up to limit results
        :rtype: list[twilio.rest.messaging.v1.service.ServiceInstance]
        """
        limits = self._version.read_limits(limit, page_size)

        page = self.page(page_size=limits['page_size'], )

        return self._version.stream(page, limits['limit'], limits['page_limit'])

    def list(self, limit=None, page_size=None):
        """
        Lists ServiceInstance records from the API as a list.
        Unlike stream(), this operation is eager and will load `limit` records into
        memory before returning.

        :param int limit: Upper limit for the number of records to return. list() guarantees
                          never to return more than limit.  Default is no limit
        :param int page_size: Number of records to fetch per request, when not set will use
                              the default value of 50 records.  If no page_size is defined
                              but a limit is defined, list() will attempt to read the limit
                              with the most efficient page size, i.e. min(limit, 1000)

        :returns: Generator that will yield up to limit results
        :rtype: list[twilio.rest.messaging.v1.service.ServiceInstance]
        """
        return list(self.stream(limit=limit, page_size=page_size, ))

    def page(self, page_token=values.unset, page_number=values.unset,
             page_size=values.unset):
        """
        Retrieve a single page of ServiceInstance records from the API.
        Request is executed immediately

        :param str page_token: PageToken provided by the API
        :param int page_number: Page Number, this value is simply for client state
        :param int page_size: Number of records to return, defaults to 50

        :returns: Page of ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServicePage
        """
        params = values.of({'PageToken': page_token, 'Page': page_number, 'PageSize': page_size, })

        response = self._version.page(
            'GET',
            self._uri,
            params=params,
        )

        return ServicePage(self._version, response, self._solution)

    def get_page(self, target_url):
        """
        Retrieve a specific page of ServiceInstance records from the API.
        Request is executed immediately

        :param str target_url: API-generated URL for the requested results page

        :returns: Page of ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServicePage
        """
        response = self._version.domain.twilio.request(
            'GET',
            target_url,
        )

        return ServicePage(self._version, response, self._solution)

    def get(self, sid):
        """
        Constructs a ServiceContext

        :param sid: The sid

        :returns: twilio.rest.messaging.v1.service.ServiceContext
        :rtype: twilio.rest.messaging.v1.service.ServiceContext
        """
        return ServiceContext(self._version, sid=sid, )

    def __call__(self, sid):
        """
        Constructs a ServiceContext

        :param sid: The sid

        :returns: twilio.rest.messaging.v1.service.ServiceContext
        :rtype: twilio.rest.messaging.v1.service.ServiceContext
        """
        return ServiceContext(self._version, sid=sid, )

    def __repr__(self):
        """
        Provide a friendly representation

        :returns: Machine friendly representation
        :rtype: str
        """
        return '<Twilio.Messaging.V1.ServiceList>'


class ServicePage(Page):
    """ PLEASE NOTE that this class contains beta products that are subject to
    change. Use them with caution. """

    def __init__(self, version, response, solution):
        """
        Initialize the ServicePage

        :param Version version: Version that contains the resource
        :param Response response: Response from the API

        :returns: twilio.rest.messaging.v1.service.ServicePage
        :rtype: twilio.rest.messaging.v1.service.ServicePage
        """
        super(ServicePage, self).__init__(version, response)

        # Path Solution
        self._solution = solution

    def get_instance(self, payload):
        """
        Build an instance of ServiceInstance

        :param dict payload: Payload response from the API

        :returns: twilio.rest.messaging.v1.service.ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceInstance
        """
        return ServiceInstance(self._version, payload, )

    def __repr__(self):
        """
        Provide a friendly representation

        :returns: Machine friendly representation
        :rtype: str
        """
        return '<Twilio.Messaging.V1.ServicePage>'


class ServiceContext(InstanceContext):
    """ PLEASE NOTE that this class contains beta products that are subject to
    change. Use them with caution. """

    def __init__(self, version, sid):
        """
        Initialize the ServiceContext

        :param Version version: Version that contains the resource
        :param sid: The sid

        :returns: twilio.rest.messaging.v1.service.ServiceContext
        :rtype: twilio.rest.messaging.v1.service.ServiceContext
        """
        super(ServiceContext, self).__init__(version)

        # Path Solution
        self._solution = {'sid': sid, }
        self._uri = '/Services/{sid}'.format(**self._solution)

        # Dependents
        self._phone_numbers = None
        self._short_codes = None
        self._alpha_senders = None

    def update(self, friendly_name=values.unset, inbound_request_url=values.unset,
               inbound_method=values.unset, fallback_url=values.unset,
               fallback_method=values.unset, status_callback=values.unset,
               sticky_sender=values.unset, mms_converter=values.unset,
               smart_encoding=values.unset, scan_message_content=values.unset,
               fallback_to_long_code=values.unset, area_code_geomatch=values.unset,
               validity_period=values.unset, synchronous_validation=values.unset):
        """
        Update the ServiceInstance

        :param unicode friendly_name: The friendly_name
        :param unicode inbound_request_url: The inbound_request_url
        :param unicode inbound_method: The inbound_method
        :param unicode fallback_url: The fallback_url
        :param unicode fallback_method: The fallback_method
        :param unicode status_callback: The status_callback
        :param bool sticky_sender: The sticky_sender
        :param bool mms_converter: The mms_converter
        :param bool smart_encoding: The smart_encoding
        :param ServiceInstance.ScanMessageContent scan_message_content: The scan_message_content
        :param bool fallback_to_long_code: The fallback_to_long_code
        :param bool area_code_geomatch: The area_code_geomatch
        :param unicode validity_period: The validity_period
        :param bool synchronous_validation: The synchronous_validation

        :returns: Updated ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceInstance
        """
        data = values.of({
            'FriendlyName': friendly_name,
            'InboundRequestUrl': inbound_request_url,
            'InboundMethod': inbound_method,
            'FallbackUrl': fallback_url,
            'FallbackMethod': fallback_method,
            'StatusCallback': status_callback,
            'StickySender': sticky_sender,
            'MmsConverter': mms_converter,
            'SmartEncoding': smart_encoding,
            'ScanMessageContent': scan_message_content,
            'FallbackToLongCode': fallback_to_long_code,
            'AreaCodeGeomatch': area_code_geomatch,
            'ValidityPeriod': validity_period,
            'SynchronousValidation': synchronous_validation,
        })

        payload = self._version.update(
            'POST',
            self._uri,
            data=data,
        )

        return ServiceInstance(self._version, payload, sid=self._solution['sid'], )

    def fetch(self):
        """
        Fetch a ServiceInstance

        :returns: Fetched ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceInstance
        """
        params = values.of({})

        payload = self._version.fetch(
            'GET',
            self._uri,
            params=params,
        )

        return ServiceInstance(self._version, payload, sid=self._solution['sid'], )

    def delete(self):
        """
        Deletes the ServiceInstance

        :returns: True if delete succeeds, False otherwise
        :rtype: bool
        """
        return self._version.delete('delete', self._uri)

    @property
    def phone_numbers(self):
        """
        Access the phone_numbers

        :returns: twilio.rest.messaging.v1.service.phone_number.PhoneNumberList
        :rtype: twilio.rest.messaging.v1.service.phone_number.PhoneNumberList
        """
        if self._phone_numbers is None:
            self._phone_numbers = PhoneNumberList(self._version, service_sid=self._solution['sid'], )
        return self._phone_numbers

    @property
    def short_codes(self):
        """
        Access the short_codes

        :returns: twilio.rest.messaging.v1.service.short_code.ShortCodeList
        :rtype: twilio.rest.messaging.v1.service.short_code.ShortCodeList
        """
        if self._short_codes is None:
            self._short_codes = ShortCodeList(self._version, service_sid=self._solution['sid'], )
        return self._short_codes

    @property
    def alpha_senders(self):
        """
        Access the alpha_senders

        :returns: twilio.rest.messaging.v1.service.alpha_sender.AlphaSenderList
        :rtype: twilio.rest.messaging.v1.service.alpha_sender.AlphaSenderList
        """
        if self._alpha_senders is None:
            self._alpha_senders = AlphaSenderList(self._version, service_sid=self._solution['sid'], )
        return self._alpha_senders

    def __repr__(self):
        """
        Provide a friendly representation

        :returns: Machine friendly representation
        :rtype: str
        """
        context = ' '.join('{}={}'.format(k, v) for k, v in self._solution.items())
        return '<Twilio.Messaging.V1.ServiceContext {}>'.format(context)


class ServiceInstance(InstanceResource):
    """ PLEASE NOTE that this class contains beta products that are subject to
    change. Use them with caution. """

    class ScanMessageContent(object):
        INHERIT = "inherit"
        ENABLE = "enable"
        DISABLE = "disable"

    def __init__(self, version, payload, sid=None):
        """
        Initialize the ServiceInstance

        :returns: twilio.rest.messaging.v1.service.ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceInstance
        """
        super(ServiceInstance, self).__init__(version)

        # Marshaled Properties
        self._properties = {
            'sid': payload['sid'],
            'account_sid': payload['account_sid'],
            'friendly_name': payload['friendly_name'],
            'date_created': deserialize.iso8601_datetime(payload['date_created']),
            'date_updated': deserialize.iso8601_datetime(payload['date_updated']),
            'inbound_request_url': payload['inbound_request_url'],
            'inbound_method': payload['inbound_method'],
            'fallback_url': payload['fallback_url'],
            'fallback_method': payload['fallback_method'],
            'status_callback': payload['status_callback'],
            'sticky_sender': payload['sticky_sender'],
            'mms_converter': payload['mms_converter'],
            'smart_encoding': payload['smart_encoding'],
            'scan_message_content': payload['scan_message_content'],
            'fallback_to_long_code': payload['fallback_to_long_code'],
            'area_code_geomatch': payload['area_code_geomatch'],
            'synchronous_validation': payload['synchronous_validation'],
            'validity_period': deserialize.integer(payload['validity_period']),
            'url': payload['url'],
            'links': payload['links'],
        }

        # Context
        self._context = None
        self._solution = {'sid': sid or self._properties['sid'], }

    @property
    def _proxy(self):
        """
        Generate an instance context for the instance, the context is capable of
        performing various actions.  All instance actions are proxied to the context

        :returns: ServiceContext for this ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceContext
        """
        if self._context is None:
            self._context = ServiceContext(self._version, sid=self._solution['sid'], )
        return self._context

    @property
    def sid(self):
        """
        :returns: Unique 34 character ID of the Service.
        :rtype: unicode
        """
        return self._properties['sid']

    @property
    def account_sid(self):
        """
        :returns: Unique 34 character ID of the Account that created this Service.
        :rtype: unicode
        """
        return self._properties['account_sid']

    @property
    def friendly_name(self):
        """
        :returns: A human readable descriptive text for this resource, up to 64 characters.
        :rtype: unicode
        """
        return self._properties['friendly_name']

    @property
    def date_created(self):
        """
        :returns: The date that this resource was created.
        :rtype: datetime
        """
        return self._properties['date_created']

    @property
    def date_updated(self):
        """
        :returns: The date that this resource was last updated.
        :rtype: datetime
        """
        return self._properties['date_updated']

    @property
    def inbound_request_url(self):
        """
        :returns: The URL Twilio will make a webhook request to when a message is received by any phone number or short code in your Service.
        :rtype: unicode
        """
        return self._properties['inbound_request_url']

    @property
    def inbound_method(self):
        """
        :returns: The HTTP method Twilio will use when making requests to the Inbound Request URL.
        :rtype: unicode
        """
        return self._properties['inbound_method']

    @property
    def fallback_url(self):
        """
        :returns: The URL that Twilio will request if an error occurs when retrieving or executing the TwiML from your Inbound Request URL.
        :rtype: unicode
        """
        return self._properties['fallback_url']

    @property
    def fallback_method(self):
        """
        :returns: The HTTP method Twilio will use when making requests to the Fallback URL.
        :rtype: unicode
        """
        return self._properties['fallback_method']

    @property
    def status_callback(self):
        """
        :returns: The URL Twilio will make a webhook request to when passing you status updates about the delivery of your messages.
        :rtype: unicode
        """
        return self._properties['status_callback']

    @property
    def sticky_sender(self):
        """
        :returns: Configuration to enable or disable Sticky Sender on your Service instance.
        :rtype: bool
        """
        return self._properties['sticky_sender']

    @property
    def mms_converter(self):
        """
        :returns: Configuration to enable or disable MMS Converter for messages sent through your Service instance.
        :rtype: bool
        """
        return self._properties['mms_converter']

    @property
    def smart_encoding(self):
        """
        :returns: Configuration to enable or disable Smart Encoding for messages sent through your Service instance.
        :rtype: bool
        """
        return self._properties['smart_encoding']

    @property
    def scan_message_content(self):
        """
        :returns: The scan_message_content
        :rtype: ServiceInstance.ScanMessageContent
        """
        return self._properties['scan_message_content']

    @property
    def fallback_to_long_code(self):
        """
        :returns: Configuration to enable or disable Fallback to Long Code for messages sent through your Service instance.
        :rtype: bool
        """
        return self._properties['fallback_to_long_code']

    @property
    def area_code_geomatch(self):
        """
        :returns: Configuration to enable or disable Area Code Geomatch on your Service Instance.
        :rtype: bool
        """
        return self._properties['area_code_geomatch']

    @property
    def synchronous_validation(self):
        """
        :returns: The synchronous_validation
        :rtype: bool
        """
        return self._properties['synchronous_validation']

    @property
    def validity_period(self):
        """
        :returns: The number of seconds all messages sent from your Service are valid for.
        :rtype: unicode
        """
        return self._properties['validity_period']

    @property
    def url(self):
        """
        :returns: The url
        :rtype: unicode
        """
        return self._properties['url']

    @property
    def links(self):
        """
        :returns: The links
        :rtype: unicode
        """
        return self._properties['links']

    def update(self, friendly_name=values.unset, inbound_request_url=values.unset,
               inbound_method=values.unset, fallback_url=values.unset,
               fallback_method=values.unset, status_callback=values.unset,
               sticky_sender=values.unset, mms_converter=values.unset,
               smart_encoding=values.unset, scan_message_content=values.unset,
               fallback_to_long_code=values.unset, area_code_geomatch=values.unset,
               validity_period=values.unset, synchronous_validation=values.unset):
        """
        Update the ServiceInstance

        :param unicode friendly_name: The friendly_name
        :param unicode inbound_request_url: The inbound_request_url
        :param unicode inbound_method: The inbound_method
        :param unicode fallback_url: The fallback_url
        :param unicode fallback_method: The fallback_method
        :param unicode status_callback: The status_callback
        :param bool sticky_sender: The sticky_sender
        :param bool mms_converter: The mms_converter
        :param bool smart_encoding: The smart_encoding
        :param ServiceInstance.ScanMessageContent scan_message_content: The scan_message_content
        :param bool fallback_to_long_code: The fallback_to_long_code
        :param bool area_code_geomatch: The area_code_geomatch
        :param unicode validity_period: The validity_period
        :param bool synchronous_validation: The synchronous_validation

        :returns: Updated ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceInstance
        """
        return self._proxy.update(
            friendly_name=friendly_name,
            inbound_request_url=inbound_request_url,
            inbound_method=inbound_method,
            fallback_url=fallback_url,
            fallback_method=fallback_method,
            status_callback=status_callback,
            sticky_sender=sticky_sender,
            mms_converter=mms_converter,
            smart_encoding=smart_encoding,
            scan_message_content=scan_message_content,
            fallback_to_long_code=fallback_to_long_code,
            area_code_geomatch=area_code_geomatch,
            validity_period=validity_period,
            synchronous_validation=synchronous_validation,
        )

    def fetch(self):
        """
        Fetch a ServiceInstance

        :returns: Fetched ServiceInstance
        :rtype: twilio.rest.messaging.v1.service.ServiceInstance
        """
        return self._proxy.fetch()

    def delete(self):
        """
        Deletes the ServiceInstance

        :returns: True if delete succeeds, False otherwise
        :rtype: bool
        """
        return self._proxy.delete()

    @property
    def phone_numbers(self):
        """
        Access the phone_numbers

        :returns: twilio.rest.messaging.v1.service.phone_number.PhoneNumberList
        :rtype: twilio.rest.messaging.v1.service.phone_number.PhoneNumberList
        """
        return self._proxy.phone_numbers

    @property
    def short_codes(self):
        """
        Access the short_codes

        :returns: twilio.rest.messaging.v1.service.short_code.ShortCodeList
        :rtype: twilio.rest.messaging.v1.service.short_code.ShortCodeList
        """
        return self._proxy.short_codes

    @property
    def alpha_senders(self):
        """
        Access the alpha_senders

        :returns: twilio.rest.messaging.v1.service.alpha_sender.AlphaSenderList
        :rtype: twilio.rest.messaging.v1.service.alpha_sender.AlphaSenderList
        """
        return self._proxy.alpha_senders

    def __repr__(self):
        """
        Provide a friendly representation

        :returns: Machine friendly representation
        :rtype: str
        """
        context = ' '.join('{}={}'.format(k, v) for k, v in self._solution.items())
        return '<Twilio.Messaging.V1.ServiceInstance {}>'.format(context)