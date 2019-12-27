// Generated by gencpp from file active_vision_msgs/Vision_Service.msg
// DO NOT EDIT!


#ifndef ACTIVE_VISION_MSGS_MESSAGE_VISION_SERVICE_H
#define ACTIVE_VISION_MSGS_MESSAGE_VISION_SERVICE_H

#include <ros/service_traits.h>


#include <active_vision_msgs/Vision_ServiceRequest.h>
#include <active_vision_msgs/Vision_ServiceResponse.h>


namespace active_vision_msgs
{

struct Vision_Service
{

typedef Vision_ServiceRequest Request;
typedef Vision_ServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Vision_Service
} // namespace active_vision_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::active_vision_msgs::Vision_Service > {
  static const char* value()
  {
    return "743c237c8927abfed6464a4d17c2f4fc";
  }

  static const char* value(const ::active_vision_msgs::Vision_Service&) { return value(); }
};

template<>
struct DataType< ::active_vision_msgs::Vision_Service > {
  static const char* value()
  {
    return "active_vision_msgs/Vision_Service";
  }

  static const char* value(const ::active_vision_msgs::Vision_Service&) { return value(); }
};


// service_traits::MD5Sum< ::active_vision_msgs::Vision_ServiceRequest> should match 
// service_traits::MD5Sum< ::active_vision_msgs::Vision_Service > 
template<>
struct MD5Sum< ::active_vision_msgs::Vision_ServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::active_vision_msgs::Vision_Service >::value();
  }
  static const char* value(const ::active_vision_msgs::Vision_ServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::active_vision_msgs::Vision_ServiceRequest> should match 
// service_traits::DataType< ::active_vision_msgs::Vision_Service > 
template<>
struct DataType< ::active_vision_msgs::Vision_ServiceRequest>
{
  static const char* value()
  {
    return DataType< ::active_vision_msgs::Vision_Service >::value();
  }
  static const char* value(const ::active_vision_msgs::Vision_ServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::active_vision_msgs::Vision_ServiceResponse> should match 
// service_traits::MD5Sum< ::active_vision_msgs::Vision_Service > 
template<>
struct MD5Sum< ::active_vision_msgs::Vision_ServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::active_vision_msgs::Vision_Service >::value();
  }
  static const char* value(const ::active_vision_msgs::Vision_ServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::active_vision_msgs::Vision_ServiceResponse> should match 
// service_traits::DataType< ::active_vision_msgs::Vision_Service > 
template<>
struct DataType< ::active_vision_msgs::Vision_ServiceResponse>
{
  static const char* value()
  {
    return DataType< ::active_vision_msgs::Vision_Service >::value();
  }
  static const char* value(const ::active_vision_msgs::Vision_ServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ACTIVE_VISION_MSGS_MESSAGE_VISION_SERVICE_H