__int64 metal_crusher::fun::establish_dbus_connection()
{
  _BYTE dest[248]; // [rsp+8h] [rbp-200h] BYREF
  _BYTE v2[264]; // [rsp+100h] [rbp-108h] BYREF

  zbus::blocking::connection::builder::Builder::session(dest);
  core::result::Result<T,E>::unwrap(v2, dest);
  zbus::blocking::connection::builder::Builder::build(dest, v2);
  return core::result::Result<T,E>::unwrap(dest);
}