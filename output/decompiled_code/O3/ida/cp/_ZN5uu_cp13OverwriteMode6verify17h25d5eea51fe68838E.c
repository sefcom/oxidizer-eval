void __fastcall uu_cp::OverwriteMode::verify(__int64 a1, __int64 a2, __int64 *a3, __int64 **a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rax
  char v12; // bp
  __int128 v13; // rax
  __int128 v14; // rax
  __int64 *v15; // [rsp+8h] [rbp-200h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+10h] [rbp-1F8h]
  __int64 v17; // [rsp+18h] [rbp-1F0h]
  __int64 v18; // [rsp+20h] [rbp-1E8h] BYREF
  const char *v19; // [rsp+28h] [rbp-1E0h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+30h] [rbp-1D8h]
  __int64 **v21; // [rsp+38h] [rbp-1D0h]
  __int64 v22; // [rsp+40h] [rbp-1C8h]
  _QWORD *v23; // [rsp+48h] [rbp-1C0h]
  __int64 v24; // [rsp+50h] [rbp-1B8h]
  __int64 *v25; // [rsp+58h] [rbp-1B0h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+60h] [rbp-1A8h]
  __int64 v27; // [rsp+68h] [rbp-1A0h]
  _QWORD src[22]; // [rsp+70h] [rbp-198h] BYREF
  void *v29; // [rsp+120h] [rbp-E8h] BYREF
  _OWORD dest[14]; // [rsp+128h] [rbp-E0h] BYREF

  if ( !(_BYTE)a2 )
  {
LABEL_14:
    *(_QWORD *)a1 = 13LL;
    return;
  }
  if ( (unsigned __int8)a2 == 1 )
  {
    v8 = (unsigned __int64)a3;
    std::sys::pal::unix::fs::stat(src);
    if ( LODWORD(src[0]) == 2 )
    {
      *((_QWORD *)&dest[0] + 1) = src[1];
      *(_QWORD *)&dest[0] = 2LL;
    }
    else
    {
      v8 = (unsigned __int64)src;
      memcpy(dest, src, 0xB0uLL);
      if ( *(_QWORD *)&dest[0] != 2LL )
      {
        v10 = DWORD2(dest[3]);
        if ( (SBYTE8(dest[3]) & 0x80u) == 0 )
        {
          LODWORD(v18) = WORD4(dest[3]) & 0xF7F;
          v25 = &v18;
          v26 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
          src[0] = 2LL;
          src[2] = 0LL;
          *(_OWORD *)&src[3] = 4uLL;
          src[5] = 0x800000020LL;
          LOBYTE(src[6]) = 3;
          v19 = asc_18DC0;
          v20 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v23 = src;
          v24 = 1LL;
          v21 = &v25;
          v22 = 1LL;
          alloc::fmt::format::format_inner(&v15, &v19);
          v8 = v10;
          uucore::features::fs::display_permissions_unix(src, v10, 0LL);
          if ( v15 != (__int64 *)0x8000000000000000LL )
          {
            v25 = v15;
            v26 = v16;
            v27 = v17;
            v15 = (__int64 *)src[0];
            v16 = (__int64 (__fastcall *)())src[1];
            v17 = src[2];
            if ( uucore::UTIL_NAME != 2 )
              once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            dest[0] = xmmword_15C040;
            v19 = (const char *)dest;
            v20 = <&T as core::fmt::Display>::fmt;
            src[0] = &unk_155318;
            src[1] = 2LL;
            src[2] = &v19;
            *(_OWORD *)&src[3] = 1uLL;
            std::io::stdio::_eprint(src);
            v19 = (_BYTE *)(&dword_0 + 1);
            v20 = (__int64 (__fastcall *)())a3;
            v21 = a4;
            LOBYTE(v22) = 1;
            src[0] = &v19;
            src[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            src[2] = &v25;
            src[3] = <alloc::string::String as core::fmt::Display>::fmt;
            src[4] = &v15;
            src[5] = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&dest[0] = &off_155400;
            *((_QWORD *)&dest[0] + 1) = 4LL;
            *(_QWORD *)&dest[2] = 0LL;
            *(_QWORD *)&dest[1] = src;
            *((_QWORD *)&dest[1] + 1) = 3LL;
            std::io::stdio::_eprint(dest);
            src[0] = &off_155440;
            src[1] = 1LL;
            src[2] = 8LL;
            *(_OWORD *)&src[3] = 0LL;
            std::io::stdio::_eprint(src);
            v29 = &std::io::stdio::stderr::INSTANCE;
            v11 = <std::io::stdio::Stderr as std::io::Write>::flush(&v29);
            if ( v11 )
            {
              v18 = v11;
              *(_QWORD *)&v14 = ((__int64 (*)(void))uucore::util_name)();
              dest[0] = v14;
              v19 = (const char *)dest;
              v20 = <&T as core::fmt::Display>::fmt;
              src[0] = &unk_155318;
              src[1] = 2LL;
              src[2] = &v19;
              *(_OWORD *)&src[3] = 1uLL;
              std::io::stdio::_eprint(src);
              *(_QWORD *)&dest[0] = &v18;
              *((_QWORD *)&dest[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
              src[0] = &unk_155338;
              src[1] = 2LL;
              src[2] = dest;
              *(_OWORD *)&src[3] = 1uLL;
              std::io::stdio::_eprint(src);
              std::process::exit(1);
            }
            v12 = ((__int64 (*)(void))uucore::read_yes)();
            if ( v15 )
              _rust_dealloc(v16, v15, 1LL);
            if ( v25 )
              _rust_dealloc(v26, v25, 1LL);
            if ( v12 )
              goto LABEL_14;
LABEL_25:
            *(_QWORD *)a1 = 8LL;
            *(_BYTE *)(a1 + 8) = 1;
            return;
          }
        }
LABEL_10:
        if ( uucore::UTIL_NAME != 2 )
        {
          v8 = (unsigned __int64)&uucore::UTIL_NAME;
          once_cell::imp::OnceCell<T>::initialize(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        }
        dest[0] = xmmword_15C040;
        v19 = (const char *)dest;
        v20 = <&T as core::fmt::Display>::fmt;
        src[0] = &unk_155318;
        src[1] = 2LL;
        src[2] = &v19;
        *(_OWORD *)&src[3] = 1uLL;
        std::io::stdio::_eprint(src);
        *(_QWORD *)&dest[0] = 1LL;
        *((_QWORD *)&dest[0] + 1) = a3;
        *(_QWORD *)&dest[1] = a4;
        BYTE8(dest[1]) = 1;
        v19 = (const char *)dest;
        v20 = <os_display::Quoted as core::fmt::Display>::fmt;
        src[0] = &off_155450;
        src[1] = 2LL;
        src[2] = &v19;
        *(_OWORD *)&src[3] = 1uLL;
        std::io::stdio::_eprint(src);
        src[0] = &off_155440;
        src[1] = 1LL;
        src[2] = 8LL;
        *(_OWORD *)&src[3] = 0LL;
        std::io::stdio::_eprint(src);
        v25 = (__int64 *)&std::io::stdio::stderr::INSTANCE;
        v9 = <std::io::stdio::Stderr as std::io::Write>::flush(&v25);
        if ( v9 )
        {
          v15 = (__int64 *)v9;
          *(_QWORD *)&v13 = uucore::util_name(&v25, v8);
          dest[0] = v13;
          v19 = (const char *)dest;
          v20 = <&T as core::fmt::Display>::fmt;
          src[0] = &unk_155318;
          src[1] = 2LL;
          src[2] = &v19;
          *(_OWORD *)&src[3] = 1uLL;
          std::io::stdio::_eprint(src);
          *(_QWORD *)&dest[0] = &v15;
          *((_QWORD *)&dest[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
          src[0] = &unk_155338;
          src[1] = 2LL;
          src[2] = dest;
          *(_OWORD *)&src[3] = 1uLL;
          std::io::stdio::_eprint(src);
          std::process::exit(1);
        }
        if ( (unsigned __int8)uucore::read_yes(&v25, v8) )
          goto LABEL_14;
        goto LABEL_25;
      }
    }
    core::ptr::drop_in_place<std::io::error::Error>((char *)dest + 8);
    goto LABEL_10;
  }
  if ( (_BYTE)a5 )
  {
    *(_QWORD *)&dest[0] = 1LL;
    *((_QWORD *)&dest[0] + 1) = a3;
    *(_QWORD *)&dest[1] = a4;
    BYTE8(dest[1]) = 1;
    v19 = (const char *)dest;
    v20 = <os_display::Quoted as core::fmt::Display>::fmt;
    src[0] = &off_155470;
    src[1] = 2LL;
    src[2] = &v19;
    *(_OWORD *)&src[3] = 1uLL;
    std::io::stdio::_print(src, a2, a3, a4, a5, a6);
  }
  *(_QWORD *)a1 = 8LL;
  *(_BYTE *)(a1 + 8) = 0;
}
