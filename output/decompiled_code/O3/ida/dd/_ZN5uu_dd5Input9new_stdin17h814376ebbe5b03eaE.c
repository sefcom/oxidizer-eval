__int64 __fastcall uu_dd::Input::new_stdin(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __m128 v12; // xmm0
  __int64 v13; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v14[2]; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v15[2]; // [rsp+18h] [rbp-D0h] BYREF
  char **v16; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-B8h]
  _QWORD *v18; // [rsp+38h] [rbp-B0h]
  __int128 v19; // [rsp+40h] [rbp-A8h]
  int v20; // [rsp+60h] [rbp-88h]

  uu_dd::Source::stdin_as_file();
  v13 = 1LL;
  std::fs::File::metadata(&v16, (char *)&v13 + 4, v4);
  if ( (_DWORD)v16 != 2 )
  {
    if ( (v20 & 0xF000) == 0x8000 && *(_BYTE *)(a2 + 66) )
    {
      v15[0] = uucore::util_name();
      v15[1] = v8;
      v14[0] = v15;
      v14[1] = <&T as core::fmt::Display>::fmt;
      v16 = (char **)&unk_161008;
      v17 = 2LL;
      v18 = v14;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      v16 = &off_161060;
      v17 = 1LL;
      v18 = (_QWORD *)&byte_8;
      v19 = 0LL;
      std::io::stdio::_eprint(&v16);
      v6 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      goto LABEL_7;
    }
    v10 = *(_QWORD *)(a2 + 128);
    if ( v10 )
    {
      if ( uu_dd::Source::skip(&v13, v10) )
      {
        v5 = v11;
        goto LABEL_3;
      }
      v12 = (__m128)(unsigned __int64)v13;
    }
    else
    {
      v12 = (__m128)xmmword_19580;
    }
    _mm_storel_ps((double *)(a1 + 8), v12);
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  v5 = v17;
LABEL_3:
  v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
LABEL_7:
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)a1 = 1LL;
  core::ptr::drop_in_place<uu_dd::Source>(HIDWORD(v13));
  return a1;
}
