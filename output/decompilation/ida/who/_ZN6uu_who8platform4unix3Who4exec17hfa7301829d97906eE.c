__int64 __fastcall uu_who::platform::unix::Who::exec(__int64 a1)
{
  __int64 v2; // rax
  char **v3; // rcx
  char **v4; // rax
  char **v5; // rsi
  char *v6; // rdi
  char *v7; // rsi
  __int64 v8; // rax
  char v9; // dl
  _OWORD *v10; // rbx
  __int64 v11; // r14
  char v12; // dl
  char v13; // bp
  char v14; // r13
  char v15; // bp
  char v16; // r15
  __int64 v17; // r12
  __int128 v19; // [rsp-50h] [rbp-3F8h]
  __int128 v20; // [rsp-40h] [rbp-3E8h]
  __int128 v21; // [rsp-30h] [rbp-3D8h]
  __int128 v22; // [rsp-20h] [rbp-3C8h]
  __int128 v23; // [rsp-10h] [rbp-3B8h]
  unsigned __int8 v24; // [rsp+2h] [rbp-3A6h]
  unsigned __int8 v25; // [rsp+3h] [rbp-3A5h]
  unsigned __int8 v26; // [rsp+4h] [rbp-3A4h]
  unsigned __int8 v27; // [rsp+5h] [rbp-3A3h]
  unsigned __int8 v28; // [rsp+6h] [rbp-3A2h]
  unsigned __int8 v29; // [rsp+7h] [rbp-3A1h]
  _OWORD *v30; // [rsp+8h] [rbp-3A0h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+10h] [rbp-398h]
  __int64 v32; // [rsp+18h] [rbp-390h]
  __int64 v33; // [rsp+20h] [rbp-388h]
  __int64 v34; // [rsp+28h] [rbp-380h]
  __int64 v35; // [rsp+30h] [rbp-378h] BYREF
  char v36; // [rsp+38h] [rbp-370h]
  char v37[8]; // [rsp+40h] [rbp-368h] BYREF
  __int64 v38; // [rsp+48h] [rbp-360h]
  _OWORD *v39; // [rsp+50h] [rbp-358h]
  __int64 v40; // [rsp+58h] [rbp-350h]
  char v41; // [rsp+60h] [rbp-348h]
  _BYTE src[388]; // [rsp+68h] [rbp-340h] BYREF
  _OWORD dest[27]; // [rsp+1F0h] [rbp-1B8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (char **)(v2 + 8);
  v4 = (char **)(v2 + 16);
  v5 = &uucore::features::utmpx::ut::DEFAULT_FILE + 1;
  if ( *(_QWORD *)(a1 + 16) == 1LL )
    v5 = v4;
  else
    v3 = &uucore::features::utmpx::ut::DEFAULT_FILE;
  v6 = *v3;
  v7 = *v5;
  if ( *(_BYTE *)(a1 + 25) )
  {
    v8 = uucore::features::utmpx::Utmpx::iter_all_records_from(v6, v7, &uucore::features::utmpx::ut::DEFAULT_FILE, v3);
    core::iter::traits::iterator::Iterator::collect(v37, v8, v9 & 1);
    v10 = v39;
    alloc::str::join_generic_copy(src, v38, v39);
    *(_QWORD *)&dest[1] = *(_QWORD *)&src[16];
    dest[0] = *(_OWORD *)src;
    v30 = dest;
    v31 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)src = &unk_FEF18;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = &v30;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_print(src);
    core::ptr::drop_in_place<alloc::string::String>(dest);
    v30 = v10;
    *(_QWORD *)&dest[0] = &v30;
    *((_QWORD *)&dest[0] + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)src = &off_FEF38;
    *(_QWORD *)&src[8] = 2LL;
    *(_QWORD *)&src[32] = 0LL;
    *(_QWORD *)&src[16] = dest;
    *(_QWORD *)&src[24] = 1LL;
    std::io::stdio::_print(src);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v37);
  }
  else
  {
    v11 = uucore::features::utmpx::Utmpx::iter_all_records_from(v6, v7, &uucore::features::utmpx::ut::DEFAULT_FILE, v3);
    v40 = v11;
    v13 = v12 & 1;
    v41 = v12 & 1;
    if ( *(_BYTE *)(a1 + 28) )
    {
      *((_QWORD *)&v23 + 1) = 4LL;
      *(_QWORD *)&v23 = &unk_191B0;
      *((_QWORD *)&v22 + 1) = 7LL;
      *(_QWORD *)&v22 = &aPidcomment[3];
      *((_QWORD *)&v21 + 1) = 3LL;
      *(_QWORD *)&v21 = aPidcomment;
      *((_QWORD *)&v20 + 1) = 4LL;
      *(_QWORD *)&v20 = &unk_19288;
      *((_QWORD *)&v19 + 1) = 4LL;
      *(_QWORD *)&v19 = &unk_19284;
      uu_who::platform::unix::Who::print_line(
        a1,
        (unsigned int)aName,
        4,
        32,
        (unsigned int)aLine,
        4,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v14 = *(_BYTE *)(a1 + 38);
    if ( v14 )
    {
      uu_who::platform::unix::current_tty((__int64)&v30);
      v34 = (__int64)v31;
      v33 = v32;
    }
    else
    {
      v30 = 0LL;
      v31 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v32 = 0LL;
      v34 = 1LL;
      v33 = 0LL;
    }
    v35 = v11;
    v36 = v13;
    v15 = *(_BYTE *)(a1 + 37);
    v29 = *(_BYTE *)(a1 + 36);
    v28 = *(_BYTE *)(a1 + 31);
    v24 = *(_BYTE *)(a1 + 32);
    v27 = *(_BYTE *)(a1 + 35);
    v26 = *(_BYTE *)(a1 + 34);
    v25 = *(_BYTE *)(a1 + 33);
    while ( 1 )
    {
      <uucore::features::utmpx::UtmpxIter as core::iter::traits::iterator::Iterator>::next(src, &v35);
      if ( *(_DWORD *)src != 1 )
        break;
      memcpy(dest, &src[4], 0x180uLL);
      if ( v14 )
      {
        uucore::features::utmpx::Utmpx::tty_device(v37, dest);
        v16 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v34,
                v33,
                v38,
                v39);
        core::ptr::drop_in_place<alloc::string::String>(v37);
        if ( !v16 )
          continue;
      }
      if ( (v15 & 1) != 0 && (unsigned __int8)uucore::features::utmpx::Utmpx::is_user_process(dest) )
      {
        v17 = uu_who::platform::unix::Who::print_user(a1, dest);
        if ( v17 )
        {
          core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v35);
          core::ptr::drop_in_place<alloc::string::String>(&v30);
          return v17;
        }
      }
      else if ( ((LOWORD(dest[0]) == 1) & v29) != 0 )
      {
        uu_who::platform::unix::Who::print_runlevel(a1, dest);
      }
      else if ( ((LOWORD(dest[0]) == 2) & v28) != 0 )
      {
        uu_who::platform::unix::Who::print_boottime(a1, dest);
      }
      else if ( ((LOWORD(dest[0]) == 3) & v27) != 0 )
      {
        uu_who::platform::unix::Who::print_clockchange(a1, dest);
      }
      else if ( ((LOWORD(dest[0]) == 5) & v26) != 0 )
      {
        uu_who::platform::unix::Who::print_initspawn(a1, dest);
      }
      else if ( ((LOWORD(dest[0]) == 6) & v25) != 0 )
      {
        uu_who::platform::unix::Who::print_login(a1, dest);
      }
      else if ( ((LOWORD(dest[0]) == 8) & v24) != 0 )
      {
        uu_who::platform::unix::Who::print_deadprocs(a1, dest);
      }
    }
    core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v35);
    core::ptr::drop_in_place<alloc::string::String>(&v30);
  }
  return 0LL;
}