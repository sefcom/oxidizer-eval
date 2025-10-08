__int64 __fastcall uu_split::LineChunkWriter::start_new_chunk(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // r13
  _QWORD v8[3]; // [rsp+8h] [rbp-90h] BYREF
  char v9; // [rsp+20h] [rbp-78h]
  _QWORD v10[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v11[12]; // [rsp+38h] [rbp-60h] BYREF

  <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(v8, a3);
  v3 = v8[0];
  if ( __OFSUB__(-v8[0], 1LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, aOutputFileSuff, 30LL);
    v4 = alloc::boxed::Box<T>::new(v11);
    result = std::io::error::Error::_new(40LL, v4, &off_10AD88);
    a1[1] = result;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v6 = v8[1];
    v7 = v8[2];
    if ( *(_BYTE *)(a2 + 160) )
    {
      v8[0] = 0LL;
      v9 = 1;
      v10[0] = v8;
      v10[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v11[0] = &off_10AF08;
      v11[1] = 2LL;
      v11[4] = 0LL;
      v11[2] = v10;
      v11[3] = 1LL;
      std::io::stdio::_print(v11);
    }
    uu_split::Settings::instantiate_current_writer(a1, (__int64 *)a2, v6, v7, 1);
    return core::ptr::drop_in_place<alloc::string::String>(v3, v6);
  }
  return result;
}