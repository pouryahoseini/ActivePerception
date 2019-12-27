// Generated by gencpp from file active_perception/Vision_ServiceResponse.msg
// DO NOT EDIT!


#ifndef ACTIVE_PERCEPTION_MESSAGE_VISION_SERVICERESPONSE_H
#define ACTIVE_PERCEPTION_MESSAGE_VISION_SERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <active_perception/Vision_Message.h>

namespace active_perception
{
template <class ContainerAllocator>
struct Vision_ServiceResponse_
{
  typedef Vision_ServiceResponse_<ContainerAllocator> Type;

  Vision_ServiceResponse_()
    : object_location()  {
    }
  Vision_ServiceResponse_(const ContainerAllocator& _alloc)
    : object_location(_alloc)  {
  (void)_alloc;
    }



   typedef  ::active_perception::Vision_Message_<ContainerAllocator>  _object_location_type;
  _object_location_type object_location;





  typedef boost::shared_ptr< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Vision_ServiceResponse_

typedef ::active_perception::Vision_ServiceResponse_<std::allocator<void> > Vision_ServiceResponse;

typedef boost::shared_ptr< ::active_perception::Vision_ServiceResponse > Vision_ServiceResponsePtr;
typedef boost::shared_ptr< ::active_perception::Vision_ServiceResponse const> Vision_ServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::active_perception::Vision_ServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace active_perception

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'active_perception': ['/home/pourya/Documents/Active_Perception/src/active_perception/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5c95021b1df9fae604953565f51cf488";
  }

  static const char* value(const ::active_perception::Vision_ServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5c95021b1df9fae6ULL;
  static const uint64_t static_value2 = 0x04953565f51cf488ULL;
};

template<class ContainerAllocator>
struct DataType< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "active_perception/Vision_ServiceResponse";
  }

  static const char* value(const ::active_perception::Vision_ServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Vision_Message object_location\n\
\n\
\n\
================================================================================\n\
MSG: active_perception/Vision_Message\n\
string Frameid\n\
geometry_msgs/Point32 Pos\n\
bool Found\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::active_perception::Vision_ServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_location);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Vision_ServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::active_perception::Vision_ServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::active_perception::Vision_ServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "object_location: ";
    s << std::endl;
    Printer< ::active_perception::Vision_Message_<ContainerAllocator> >::stream(s, indent + "  ", v.object_location);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIVE_PERCEPTION_MESSAGE_VISION_SERVICERESPONSE_H
