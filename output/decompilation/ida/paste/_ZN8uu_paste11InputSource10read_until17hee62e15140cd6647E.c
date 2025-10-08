__int64 __fastcall uu_paste::InputSource::read_until(__int64 *a1, _QWORD *a2, unsigned __int8 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v12; // r14
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+10h] [rbp-28h]

  if ( *a2 )
  {
    result = std::io::read_until(a2, a3, a4);
    if ( (result & 1) != 0 )
    {
      result = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
      *a1 = result;
      a1[1] = v7;
      return result;
    }
  }
  else
  {
    v8 = a2[1];
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 > 0x7FFFFFFFFFFFFFFELL )
    {
      *a1 = uu_paste::InputSource::read_until::{{closure}}();
      result = (__int64)&off_DECF0;
      a1[1] = (__int64)&off_DECF0;
      return result;
    }
    v12 = v8 + 16;
    *(_QWORD *)(v8 + 16) = v9 + 1;
    v17 = std::io::stdio::Stdin::lock(v8 + 24);
    LOBYTE(v18) = v13 & 1;
    if ( (<std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v17, a3, a4) & 1) != 0 )
    {
      *a1 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
      a1[1] = v15;
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v17, v18);
      return core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(v12);
    }
    v16 = v14;
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v17, v18);
    result = core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(v12);
    v6 = v16;
  }
  a1[1] = v6;
  *a1 = 0LL;
  return result;
}