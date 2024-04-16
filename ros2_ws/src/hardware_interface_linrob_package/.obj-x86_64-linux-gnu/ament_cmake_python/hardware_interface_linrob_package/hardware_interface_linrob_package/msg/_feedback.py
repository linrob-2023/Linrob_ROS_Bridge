# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hardware_interface_linrob_package:msg/Feedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Feedback(type):
    """Metaclass of message 'Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hardware_interface_linrob_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hardware_interface_linrob_package.msg.Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Feedback(metaclass=Metaclass_Feedback):
    """Message class 'Feedback'."""

    __slots__ = [
        '_axis_name',
        '_status',
        '_state',
        '_error_id_l1',
        '_error_id_l2',
        '_error_id_l3',
        '_timestamp',
        '_position_reached',
        '_axis_referenced',
    ]

    _fields_and_field_types = {
        'axis_name': 'string',
        'status': 'string',
        'state': 'string',
        'error_id_l1': 'string',
        'error_id_l2': 'string',
        'error_id_l3': 'string',
        'timestamp': 'string',
        'position_reached': 'boolean',
        'axis_referenced': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.axis_name = kwargs.get('axis_name', str())
        self.status = kwargs.get('status', str())
        self.state = kwargs.get('state', str())
        self.error_id_l1 = kwargs.get('error_id_l1', str())
        self.error_id_l2 = kwargs.get('error_id_l2', str())
        self.error_id_l3 = kwargs.get('error_id_l3', str())
        self.timestamp = kwargs.get('timestamp', str())
        self.position_reached = kwargs.get('position_reached', bool())
        self.axis_referenced = kwargs.get('axis_referenced', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.axis_name != other.axis_name:
            return False
        if self.status != other.status:
            return False
        if self.state != other.state:
            return False
        if self.error_id_l1 != other.error_id_l1:
            return False
        if self.error_id_l2 != other.error_id_l2:
            return False
        if self.error_id_l3 != other.error_id_l3:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.position_reached != other.position_reached:
            return False
        if self.axis_referenced != other.axis_referenced:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def axis_name(self):
        """Message field 'axis_name'."""
        return self._axis_name

    @axis_name.setter
    def axis_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'axis_name' field must be of type 'str'"
        self._axis_name = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def error_id_l1(self):
        """Message field 'error_id_l1'."""
        return self._error_id_l1

    @error_id_l1.setter
    def error_id_l1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_id_l1' field must be of type 'str'"
        self._error_id_l1 = value

    @builtins.property
    def error_id_l2(self):
        """Message field 'error_id_l2'."""
        return self._error_id_l2

    @error_id_l2.setter
    def error_id_l2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_id_l2' field must be of type 'str'"
        self._error_id_l2 = value

    @builtins.property
    def error_id_l3(self):
        """Message field 'error_id_l3'."""
        return self._error_id_l3

    @error_id_l3.setter
    def error_id_l3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_id_l3' field must be of type 'str'"
        self._error_id_l3 = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'timestamp' field must be of type 'str'"
        self._timestamp = value

    @builtins.property
    def position_reached(self):
        """Message field 'position_reached'."""
        return self._position_reached

    @position_reached.setter
    def position_reached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_reached' field must be of type 'bool'"
        self._position_reached = value

    @builtins.property
    def axis_referenced(self):
        """Message field 'axis_referenced'."""
        return self._axis_referenced

    @axis_referenced.setter
    def axis_referenced(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'axis_referenced' field must be of type 'bool'"
        self._axis_referenced = value
