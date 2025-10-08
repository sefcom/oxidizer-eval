void *__fastcall sniffnet::gui::types::conf::Conf::load(void *dest)
{
  _BYTE v2[96]; // [rsp+8h] [rbp-270h] BYREF
  _DWORD src[132]; // [rsp+68h] [rbp-210h] BYREF

  confy::load(src);
  if ( src[0] == 2 )
  {
    core::ptr::drop_in_place<core::result::Result<sniffnet::gui::types::conf::Conf,confy::ConfyError>>(src);
    <sniffnet::gui::types::conf::Conf as core::default::Default>::default(src);
    sniffnet::gui::types::conf::Conf::store(v2, src);
    core::ptr::drop_in_place<core::result::Result<(),confy::ConfyError>>(v2);
    <sniffnet::gui::types::conf::Conf as core::default::Default>::default(dest);
  }
  else
  {
    memcpy(dest, src, 0x1F8uLL);
  }
  return dest;
}