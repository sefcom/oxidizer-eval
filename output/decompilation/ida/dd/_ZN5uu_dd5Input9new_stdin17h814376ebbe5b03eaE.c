__int64 __fastcall uu_dd::Input::new_stdin(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __m128 v13; // xmm0
  __int64 v14; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v15[2]; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v16[2]; // [rsp+18h] [rbp-D0h] BYREF
  char **v17; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-B8h]
  _QWORD *v19; // [rsp+38h] [rbp-B0h]
  __int128 v20; // [rsp+40h] [rbp-A8h]
  int v21; // [rsp+60h] [rbp-88h]

  uu_dd::Source::stdin_as_file();
  v14 = 1LL;
  std::fs::File::metadata(&v17, (char *)&v14 + 4, v4);
  if ( (_DWORD)v17 != 2 )
  {
    if ( (v21 & 0xF000) == 0x8000 && *(_BYTE *)(a2 + 66) )
    {
      v16[0] = uucore::util_name();
      v16[1] = v9;
      v15[0] = v16;
      v15[1] = <&T as core::fmt::Display>::fmt;
      v17 = (char **)&unk_161008;
      v18 = 2LL;
      v19 = v15;
      v20 = 1uLL;
      std::io::stdio::_eprint(&v17);
      v17 = &off_161060;
      v18 = 1LL;
      v19 = (_QWORD *)&byte_8;
      v20 = 0LL;
      std::io::stdio::_eprint(&v17);
      v7 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      goto LABEL_7;
    }
    v11 = *(_QWORD *)(a2 + 128);
    if ( v11 )
    {
      if ( uu_dd::Source::skip(&v14, v11, v5) )
      {
        v6 = v12;
        goto LABEL_3;
      }
      v13 = (__m128)(unsigned __int64)v14;
    }
    else
    {
      v13 = (__m128)xmmword_19580;
    }
    _mm_storel_ps((double *)(a1 + 8), v13);
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  v6 = v18;
LABEL_3:
  v7 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
LABEL_7:
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = 1LL;
  core::ptr::drop_in_place<uu_dd::Source>(HIDWORD(v14));
  return a1;
}
