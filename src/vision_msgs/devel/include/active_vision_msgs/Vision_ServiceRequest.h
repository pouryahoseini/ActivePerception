// Generated by gencpp from file active_vision_msgs/Vision_ServiceRequest.msg
// DO NOT EDIT!


#ifndef ACTIVE_VISION_MSGS_MESSAGE_VISION_SERVICEREQUEST_H
#define ACTIVE_VISION_MSGS_MESSAGE_VISION_SERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace active_vision_msgs
{
template <class ContainerAllocator>
struct Vision_ServiceRequest_
{
  typedef Vision_ServiceRequest_<ContainerAllocator> Type;

  Vision_ServiceRequest_()
    : Label()  {
    }
  Vision_ServiceRequest_(const ContainerAllocator& _alloc)
    : Label(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _Label_type;
  _Label_type Label;





  typedef boost::shared_ptr< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct Vision_ServiceRequest_

typedef ::active_vision_msgs::Vision_ServiceRequest_<std::allocator<void> > Vision_ServiceRequest;

typedef boost::shared_ptr< ::active_vision_msgs::Vision_ServiceRequest > Vision_ServiceRequestPtr;
typedef boost::shared_ptr< ::active_vision_msgs::Vision_ServiceRequest const> Vision_ServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace active_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'active_vision_msgs': ['/home/pourya/Documents/Active_Perception/src/vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ec13f5aded047f0ac89d028f3701bc0c";
  }

  static const char* value(const ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xec13f5aded047f0aULL;
  static const uint64_t static_value2 = 0xc89d028f3701bc0cULL;
};

template<class ContainerAllocator>
struct DataType< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "active_vision_msgs/Vision_ServiceRequest";
  }

  static const char* value(const ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string Label\n\
";
  }

  static const char* value(const ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Label);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Vision_ServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::active_vision_msgs::Vision_ServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "Label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.Label);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIVE_VISION_MSGS_MESSAGE_VISION_SERVICEREQUEST_H
