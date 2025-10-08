__int64 __fastcall bat::vscreen::AnsiStyle::update(_QWORD *dest)
{
  _BYTE src[304]; // [rsp+8h] [rbp-130h] BYREF

  if ( __OFSUB__(0LL, *dest) )
  {
    bat::vscreen::Attributes::new(src);
    core::ptr::drop_in_place<core::option::Option<bat::vscreen::Attributes>>(dest);
    memcpy(dest, src, 0x110uLL);
    if ( *dest == 0x8000000000000000LL )
      core::option::unwrap_failed(&off_6CED00);
  }
  return bat::vscreen::Attributes::update(dest);
}