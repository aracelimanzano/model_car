// Generated by gencpp from file realsense_camera/IsPowered.msg
// DO NOT EDIT!


#ifndef REALSENSE_CAMERA_MESSAGE_ISPOWERED_H
#define REALSENSE_CAMERA_MESSAGE_ISPOWERED_H

#include <ros/service_traits.h>


#include <realsense_camera/IsPoweredRequest.h>
#include <realsense_camera/IsPoweredResponse.h>


namespace realsense_camera
{

struct IsPowered
{

typedef IsPoweredRequest Request;
typedef IsPoweredResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct IsPowered
} // namespace realsense_camera


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::realsense_camera::IsPowered > {
  static const char* value()
  {
    return "7ee632447d6acea26ec2c412cc1e6ed5";
  }

  static const char* value(const ::realsense_camera::IsPowered&) { return value(); }
};

template<>
struct DataType< ::realsense_camera::IsPowered > {
  static const char* value()
  {
    return "realsense_camera/IsPowered";
  }

  static const char* value(const ::realsense_camera::IsPowered&) { return value(); }
};


// service_traits::MD5Sum< ::realsense_camera::IsPoweredRequest> should match 
// service_traits::MD5Sum< ::realsense_camera::IsPowered > 
template<>
struct MD5Sum< ::realsense_camera::IsPoweredRequest>
{
  static const char* value()
  {
    return MD5Sum< ::realsense_camera::IsPowered >::value();
  }
  static const char* value(const ::realsense_camera::IsPoweredRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::realsense_camera::IsPoweredRequest> should match 
// service_traits::DataType< ::realsense_camera::IsPowered > 
template<>
struct DataType< ::realsense_camera::IsPoweredRequest>
{
  static const char* value()
  {
    return DataType< ::realsense_camera::IsPowered >::value();
  }
  static const char* value(const ::realsense_camera::IsPoweredRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::realsense_camera::IsPoweredResponse> should match 
// service_traits::MD5Sum< ::realsense_camera::IsPowered > 
template<>
struct MD5Sum< ::realsense_camera::IsPoweredResponse>
{
  static const char* value()
  {
    return MD5Sum< ::realsense_camera::IsPowered >::value();
  }
  static const char* value(const ::realsense_camera::IsPoweredResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::realsense_camera::IsPoweredResponse> should match 
// service_traits::DataType< ::realsense_camera::IsPowered > 
template<>
struct DataType< ::realsense_camera::IsPoweredResponse>
{
  static const char* value()
  {
    return DataType< ::realsense_camera::IsPowered >::value();
  }
  static const char* value(const ::realsense_camera::IsPoweredResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // REALSENSE_CAMERA_MESSAGE_ISPOWERED_H