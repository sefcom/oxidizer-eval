void *__fastcall bat::input::named(void *dest, const void *a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+10h] [rbp-C8h]
  __int128 v7; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+28h] [rbp-B0h]
  _BYTE src[168]; // [rsp+30h] [rbp-A8h] BYREF

  if ( !a3 )
    return memcpy(dest, a2, 0xA0uLL);
  bat::input::Input::with_name(src, a2, a3, a4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7, aFile_0, 4LL);
  v6 = v8;
  v5 = v7;
  ((void (__fastcall *)(_BYTE *, __int128 *))bat::input::InputDescription::set_kind)(&src[40], &v5);
  return memcpy(dest, src, 0xA0uLL);
}