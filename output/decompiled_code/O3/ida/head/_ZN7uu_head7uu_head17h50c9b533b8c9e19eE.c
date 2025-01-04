__int64 __fastcall uu_head::uu_head(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  char v3; // r15
  void *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rdx
  char v7; // dl
  __int64 n_lines; // rax
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int8 v14; // [rsp+8h] [rbp-110h]
  bool v15; // [rsp+9h] [rbp-10Fh]
  char v16; // [rsp+Ah] [rbp-10Eh]
  char v17; // [rsp+Bh] [rbp-10Dh]
  unsigned int v18; // [rsp+Ch] [rbp-10Ch] BYREF
  __int128 v19; // [rsp+10h] [rbp-108h] BYREF
  __int64 **v20; // [rsp+20h] [rbp-F8h]
  __int128 v21; // [rsp+28h] [rbp-F0h]
  __int64 v22; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-D0h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+50h] [rbp-C8h]
  unsigned __int64 v25; // [rsp+58h] [rbp-C0h]
  __int64 v26; // [rsp+60h] [rbp-B8h] BYREF
  void *v27; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-A8h]
  __int64 *v29; // [rsp+78h] [rbp-A0h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+80h] [rbp-98h]
  __int64 *v31; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall *v32)(); // [rsp+90h] [rbp-88h]
  __int64 *v33; // [rsp+98h] [rbp-80h]
  unsigned __int64 v34; // [rsp+A0h] [rbp-78h]
  __int64 v35; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-68h]
  _QWORD v37[2]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-50h]
  __int128 v39; // [rsp+D0h] [rbp-48h] BYREF
  __int64 **v40; // [rsp+E0h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 24);
  v33 = (__int64 *)a1;
  v34 = *(_QWORD *)(a1 + 32);
  v37[0] = v1;
  v37[1] = v1 + 24 * v34;
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v37);
  if ( v2 )
  {
    v17 = *((_BYTE *)v33 + 42);
    v16 = *((_BYTE *)v33 + 41);
    v15 = v16 == 0 && *((_BYTE *)v33 + 40) != 0;
    v38 = *v33;
    v25 = v33[1];
    v14 = *((_BYTE *)v33 + 43);
    v3 = 0;
    do
    {
      if ( !v17 )
      {
        while ( 1 )
        {
          v4 = *(void **)(v2 + 8);
          v5 = *(_QWORD *)(v2 + 16);
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, asc_1DF3B, 1LL) )
            goto LABEL_6;
          v27 = v4;
          v28 = v5;
          std::fs::File::open(&v23, v4, v5);
          if ( !(_DWORD)v23 )
            break;
          v26 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  v24,
                  v27,
                  v28);
          uucore::mods::error::set_exit_code(1LL);
          v35 = uucore::util_name();
          v36 = v6;
          v29 = &v35;
          v30 = <&T as core::fmt::Display>::fmt;
          v31 = &v26;
          v32 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&v19 = &unk_12CE60;
          *((_QWORD *)&v19 + 1) = 3LL;
          v20 = &v29;
          v21 = 2uLL;
          std::io::stdio::_eprint(&v19);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v26);
          v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v37);
          if ( !v2 )
            return 0LL;
        }
        v18 = HIDWORD(v23);
        if ( v34 <= 1 )
        {
          if ( !v16 )
            goto LABEL_32;
        }
        else if ( v15 )
        {
          goto LABEL_32;
        }
        if ( (v3 & 1) != 0 )
        {
          *(_QWORD *)&v19 = &off_12CF20;
          *((_QWORD *)&v19 + 1) = 1LL;
          v20 = (__int64 **)&byte_8;
          v21 = 0LL;
          std::io::stdio::_print(&v19);
        }
        v29 = (__int64 *)&v27;
        v30 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &off_12CF40;
        *((_QWORD *)&v19 + 1) = 2LL;
        v20 = &v29;
        v21 = 1uLL;
        std::io::stdio::_print(&v19);
LABEL_32:
        v12 = uu_head::head_file((__int64)&v18, (__int64)v33);
        v22 = v12;
        core::ptr::drop_in_place<std::fs::File>(v18);
        if ( v12 )
          goto LABEL_25;
        goto LABEL_3;
      }
      v4 = *(void **)(v2 + 8);
      v5 = *(_QWORD *)(v2 + 16);
LABEL_6:
      if ( v34 <= 1 )
      {
        if ( v16 )
        {
LABEL_16:
          if ( (v3 & 1) != 0 )
          {
            *(_QWORD *)&v19 = &off_12CF20;
            *((_QWORD *)&v19 + 1) = 1LL;
            v20 = (__int64 **)&byte_8;
            v21 = 0LL;
            std::io::stdio::_print(&v19);
          }
          *(_QWORD *)&v19 = &off_12CF30;
          *((_QWORD *)&v19 + 1) = 1LL;
          v20 = (__int64 **)&byte_8;
          v21 = 0LL;
          std::io::stdio::_print(&v19);
        }
      }
      else if ( !v15 )
      {
        goto LABEL_16;
      }
      v29 = (__int64 *)std::io::stdio::stdin();
      *(_QWORD *)&v19 = std::io::stdio::Stdin::lock(&v29);
      BYTE8(v19) = v7 & 1;
      switch ( v38 )
      {
        case 0LL:
          n_lines = uu_head::read_n_lines((__int64)&v19, v25, v14);
          break;
        case 1LL:
          n_lines = uu_head::read_but_last_n_lines((__int64)&v19, v25, v14);
          break;
        case 2LL:
          n_lines = uu_head::read_n_bytes(&v19, v25);
          break;
        case 3LL:
          n_lines = uu_head::read_but_last_n_bytes((__int64)&v19, v25);
          break;
      }
      v9 = n_lines;
      v22 = n_lines;
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v19, DWORD2(v19));
      if ( v9 )
      {
LABEL_25:
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, asc_1DF3B, 1LL) )
        {
          v4 = &unk_1DF94;
          v5 = 14LL;
        }
        v27 = v4;
        v28 = v5;
        v29 = (__int64 *)&v27;
        v30 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &off_12CF60;
        *((_QWORD *)&v19 + 1) = 2LL;
        v20 = &v29;
        v21 = 1uLL;
        core::option::Option<T>::map_or_else(&v39, &v19);
        LODWORD(v21) = 1;
        v19 = v39;
        v20 = v40;
        v23 = alloc::boxed::Box<T>::new(&v19);
        v24 = &off_12CFB8;
        v10 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v23);
        uucore::mods::error::set_exit_code(v10);
        v35 = uucore::util_name();
        v36 = v11;
        v29 = &v35;
        v30 = <&T as core::fmt::Display>::fmt;
        v31 = &v23;
        v32 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &unk_12CE60;
        *((_QWORD *)&v19 + 1) = 3LL;
        v20 = &v29;
        v21 = 2uLL;
        std::io::stdio::_eprint(&v19);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v23, v24);
      }
LABEL_3:
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v22);
      v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v37);
      v3 = 1;
    }
    while ( v2 );
  }
  return 0LL;
}
