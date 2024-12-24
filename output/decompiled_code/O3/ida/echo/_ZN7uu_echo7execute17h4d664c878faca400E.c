__int64 __fastcall uu_echo::execute(__int64 a1, char a2, char a3, __int128 *a4)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdi
  _BYTE v17[8]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v18; // [rsp+18h] [rbp-80h]
  _OWORD v19[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v5 = *a4;
  v6 = a4[1];
  v7 = a4[2];
  v19[3] = a4[3];
  v19[2] = v7;
  v19[1] = v6;
  v19[0] = v5;
  v20 = 0LL;
  v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v19);
  if ( v9 )
  {
    if ( a3 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        v11 = *(_QWORD *)(v9 + 16);
        if ( v8 )
        {
          v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, asc_1B7BB, 1LL);
          if ( v12 )
            break;
        }
        uu_echo::print_escaped((__int64)v17, v10, v11, a1);
        if ( v17[0] )
        {
          v15 = v18;
          return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        }
        if ( v17[1] )
          return 0LL;
        v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v19);
        if ( !v9 )
          goto LABEL_13;
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v9 + 8);
        v14 = *(_QWORD *)(v9 + 16);
        if ( v8 )
        {
          v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, asc_1B7BB, 1LL);
          if ( v12 )
            break;
        }
        v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, v13, v14);
        if ( v12 )
          break;
        v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v19);
        if ( !v9 )
          goto LABEL_13;
      }
    }
  }
  else
  {
LABEL_13:
    if ( !a2 )
      return 0LL;
    v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, "\n\r\t\v\\x", 1LL);
    if ( !v12 )
      return 0LL;
  }
  v15 = v12;
  return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
}
