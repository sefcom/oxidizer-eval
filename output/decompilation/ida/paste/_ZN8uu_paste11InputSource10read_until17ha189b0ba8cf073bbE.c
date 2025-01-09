__int64 (__fastcall **__fastcall uu_paste::InputSource::read_until(
        __int64 (__fastcall ***a1)(),
        _QWORD *a2,
        unsigned __int8 a3,
        __int64 a4))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v7)(); // rdx
  __int64 (__fastcall **v8)(); // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  char v12; // dl
  __int64 (__fastcall **v13)(); // rdx
  __int64 (__fastcall **v14)(); // rdx
  __int64 (__fastcall **v15)(); // r15
  __int64 v16; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+10h] [rbp-28h]

  if ( *a2 )
  {
    result = (__int64 (__fastcall **)())std::io::read_until(a2, a3, a4);
    if ( result )
    {
      result = (__int64 (__fastcall **)())uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
      *a1 = result;
      a1[1] = v8;
      return result;
    }
  }
  else
  {
    v9 = core::cell::RefCell<T>::try_borrow(a2[1] + 16LL);
    if ( !v9 )
    {
      *a1 = (__int64 (__fastcall **)())uu_paste::InputSource::read_until::{{closure}}();
      result = &off_1135A0;
      a1[1] = &off_1135A0;
      return result;
    }
    v11 = v10;
    v16 = std::io::stdio::Stdin::lock(v9);
    LOBYTE(v17) = v12 & 1;
    if ( <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v16, a3, a4) )
    {
      *a1 = (__int64 (__fastcall **)())uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
      a1[1] = v14;
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v16, v17);
      return (__int64 (__fastcall **)())core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(v11);
    }
    v15 = v13;
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v16, v17);
    result = (__int64 (__fastcall **)())core::ptr::drop_in_place<core::cell::Ref<std::io::stdio::Stdin>>(v11);
    v7 = v15;
  }
  a1[1] = v7;
  *a1 = 0LL;
  return result;
}
