# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hardware_interface_linrob_package:action/MoveFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveFeedback_Goal(type):
    """Metaclass of message 'MoveFeedback_Goal'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_Goal(metaclass=Metaclass_MoveFeedback_Goal):
    """Message class 'MoveFeedback_Goal'."""

    __slots__ = [
        '_command_type',
        '_position',
        '_velocity',
        '_acceleration',
        '_deceleration',
    ]

    _fields_and_field_types = {
        'command_type': 'string',
        'position': 'double',
        'velocity': 'double',
        'acceleration': 'double',
        'deceleration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command_type = kwargs.get('command_type', str())
        self.position = kwargs.get('position', float())
        self.velocity = kwargs.get('velocity', float())
        self.acceleration = kwargs.get('acceleration', float())
        self.deceleration = kwargs.get('deceleration', float())

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
        if self.command_type != other.command_type:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.deceleration != other.deceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command_type(self):
        """Message field 'command_type'."""
        return self._command_type

    @command_type.setter
    def command_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command_type' field must be of type 'str'"
        self._command_type = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration = value

    @builtins.property
    def deceleration(self):
        """Message field 'deceleration'."""
        return self._deceleration

    @deceleration.setter
    def deceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deceleration = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveFeedback_Result(type):
    """Metaclass of message 'MoveFeedback_Result'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_Result(metaclass=Metaclass_MoveFeedback_Result):
    """Message class 'MoveFeedback_Result'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveFeedback_Feedback(type):
    """Metaclass of message 'MoveFeedback_Feedback'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_Feedback(metaclass=Metaclass_MoveFeedback_Feedback):
    """Message class 'MoveFeedback_Feedback'."""

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveFeedback_SendGoal_Request(type):
    """Metaclass of message 'MoveFeedback_SendGoal_Request'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__send_goal__request

            from hardware_interface_linrob_package.action import MoveFeedback
            if MoveFeedback.Goal.__class__._TYPE_SUPPORT is None:
                MoveFeedback.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_SendGoal_Request(metaclass=Metaclass_MoveFeedback_SendGoal_Request):
    """Message class 'MoveFeedback_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'hardware_interface_linrob_package/MoveFeedback_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hardware_interface_linrob_package', 'action'], 'MoveFeedback_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Goal
        self.goal = kwargs.get('goal', MoveFeedback_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Goal
            assert \
                isinstance(value, MoveFeedback_Goal), \
                "The 'goal' field must be a sub message of type 'MoveFeedback_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveFeedback_SendGoal_Response(type):
    """Metaclass of message 'MoveFeedback_SendGoal_Response'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_SendGoal_Response(metaclass=Metaclass_MoveFeedback_SendGoal_Response):
    """Message class 'MoveFeedback_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_MoveFeedback_SendGoal(type):
    """Metaclass of service 'MoveFeedback_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hardware_interface_linrob_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hardware_interface_linrob_package.action.MoveFeedback_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move_feedback__send_goal

            from hardware_interface_linrob_package.action import _move_feedback
            if _move_feedback.Metaclass_MoveFeedback_SendGoal_Request._TYPE_SUPPORT is None:
                _move_feedback.Metaclass_MoveFeedback_SendGoal_Request.__import_type_support__()
            if _move_feedback.Metaclass_MoveFeedback_SendGoal_Response._TYPE_SUPPORT is None:
                _move_feedback.Metaclass_MoveFeedback_SendGoal_Response.__import_type_support__()


class MoveFeedback_SendGoal(metaclass=Metaclass_MoveFeedback_SendGoal):
    from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_SendGoal_Request as Request
    from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveFeedback_GetResult_Request(type):
    """Metaclass of message 'MoveFeedback_GetResult_Request'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_GetResult_Request(metaclass=Metaclass_MoveFeedback_GetResult_Request):
    """Message class 'MoveFeedback_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveFeedback_GetResult_Response(type):
    """Metaclass of message 'MoveFeedback_GetResult_Response'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__get_result__response

            from hardware_interface_linrob_package.action import MoveFeedback
            if MoveFeedback.Result.__class__._TYPE_SUPPORT is None:
                MoveFeedback.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_GetResult_Response(metaclass=Metaclass_MoveFeedback_GetResult_Response):
    """Message class 'MoveFeedback_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'hardware_interface_linrob_package/MoveFeedback_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hardware_interface_linrob_package', 'action'], 'MoveFeedback_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Result
        self.result = kwargs.get('result', MoveFeedback_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Result
            assert \
                isinstance(value, MoveFeedback_Result), \
                "The 'result' field must be a sub message of type 'MoveFeedback_Result'"
        self._result = value


class Metaclass_MoveFeedback_GetResult(type):
    """Metaclass of service 'MoveFeedback_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hardware_interface_linrob_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hardware_interface_linrob_package.action.MoveFeedback_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move_feedback__get_result

            from hardware_interface_linrob_package.action import _move_feedback
            if _move_feedback.Metaclass_MoveFeedback_GetResult_Request._TYPE_SUPPORT is None:
                _move_feedback.Metaclass_MoveFeedback_GetResult_Request.__import_type_support__()
            if _move_feedback.Metaclass_MoveFeedback_GetResult_Response._TYPE_SUPPORT is None:
                _move_feedback.Metaclass_MoveFeedback_GetResult_Response.__import_type_support__()


class MoveFeedback_GetResult(metaclass=Metaclass_MoveFeedback_GetResult):
    from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_GetResult_Request as Request
    from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveFeedback_FeedbackMessage(type):
    """Metaclass of message 'MoveFeedback_FeedbackMessage'."""

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
                'hardware_interface_linrob_package.action.MoveFeedback_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move_feedback__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move_feedback__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move_feedback__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__move_feedback__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move_feedback__feedback_message

            from hardware_interface_linrob_package.action import MoveFeedback
            if MoveFeedback.Feedback.__class__._TYPE_SUPPORT is None:
                MoveFeedback.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveFeedback_FeedbackMessage(metaclass=Metaclass_MoveFeedback_FeedbackMessage):
    """Message class 'MoveFeedback_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'hardware_interface_linrob_package/MoveFeedback_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['hardware_interface_linrob_package', 'action'], 'MoveFeedback_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Feedback
        self.feedback = kwargs.get('feedback', MoveFeedback_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Feedback
            assert \
                isinstance(value, MoveFeedback_Feedback), \
                "The 'feedback' field must be a sub message of type 'MoveFeedback_Feedback'"
        self._feedback = value


class Metaclass_MoveFeedback(type):
    """Metaclass of action 'MoveFeedback'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hardware_interface_linrob_package')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hardware_interface_linrob_package.action.MoveFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__move_feedback

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from hardware_interface_linrob_package.action import _move_feedback
            if _move_feedback.Metaclass_MoveFeedback_SendGoal._TYPE_SUPPORT is None:
                _move_feedback.Metaclass_MoveFeedback_SendGoal.__import_type_support__()
            if _move_feedback.Metaclass_MoveFeedback_GetResult._TYPE_SUPPORT is None:
                _move_feedback.Metaclass_MoveFeedback_GetResult.__import_type_support__()
            if _move_feedback.Metaclass_MoveFeedback_FeedbackMessage._TYPE_SUPPORT is None:
                _move_feedback.Metaclass_MoveFeedback_FeedbackMessage.__import_type_support__()


class MoveFeedback(metaclass=Metaclass_MoveFeedback):

    # The goal message defined in the action definition.
    from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Goal as Goal
    # The result message defined in the action definition.
    from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Result as Result
    # The feedback message defined in the action definition.
    from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from hardware_interface_linrob_package.action._move_feedback import MoveFeedback_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
