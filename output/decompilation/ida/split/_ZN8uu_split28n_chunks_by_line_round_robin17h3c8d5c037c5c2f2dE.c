__int64 __fastcall uu_split::n_chunks_by_line_round_robin(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int8 v8; // al
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r13
  unsigned __int8 v23; // al
  unsigned __int64 v24; // rbp
  __int64 *v25; // r12
  __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v30; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+10h] [rbp-98h]
  __int64 v32; // [rsp+18h] [rbp-90h]
  __int64 v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+28h] [rbp-80h] BYREF
  __int64 v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-5Ch]
  __int64 v39; // [rsp+50h] [rbp-58h] BYREF
  __int64 v40; // [rsp+58h] [rbp-50h]
  __int64 v41; // [rsp+60h] [rbp-48h]
  __int64 v42; // [rsp+68h] [rbp-40h]
  __int64 v43; // [rsp+70h] [rbp-38h]

  v33 = a2;
  v30 = std::io::stdio::stdout();
  v37 = std::io::stdio::Stdout::lock(&v30);
  v34 = 0LL;
  v35 = 8LL;
  v36 = 0LL;
  if ( !a4 )
  {
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v30, a3, a1, *(unsigned __int8 *)(a1 + 161));
    v20 = v30;
    v21 = v31;
    v22 = v32;
    if ( __OFSUB__(-v30, 1LL) )
    {
LABEL_35:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v34);
      goto LABEL_36;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v34);
    v34 = v20;
    v35 = v21;
    v36 = v22;
    v23 = *(_BYTE *)(a1 + 162);
    if ( a3 )
    {
      v42 = a1;
      v41 = *(_QWORD *)(a1 + 136);
      v24 = 0LL;
      v38 = v23;
      v25 = &v39;
      v26 = 0LL;
      while ( 1 )
      {
        v30 = 0LL;
        v31 = 1LL;
        v32 = 0LL;
        if ( (std::io::BufRead::read_until(v33, v38, &v30) & 1) != 0 )
          break;
        if ( !v12 )
          goto LABEL_31;
        v14 = v31;
        v43 = v32;
        if ( (a3 | v24) >> 32 )
          v27 = v24 % a3;
        else
          v27 = (unsigned int)v24 % (unsigned int)a3;
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(v25, &v34, v27, v42);
        v28 = (__int64)v25;
        v21 = v39;
        if ( v39 )
          goto LABEL_34;
        v25 = (__int64 *)v28;
        uu_split::custom_write_all(v28, v14, v43, v40, v41);
        if ( (_BYTE)v39 == 1 )
        {
          v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v40);
LABEL_33:
          v21 = v17;
          goto LABEL_34;
        }
        v26 += BYTE1(v39) ^ 1LL;
        if ( v26 == a3 )
          goto LABEL_31;
        ++v24;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v30, v14, v12, v13);
      }
    }
    else
    {
      v30 = 0LL;
      v31 = 1LL;
      v32 = 0LL;
      if ( (std::io::BufRead::read_until(v33, v23, &v30) & 1) == 0 )
      {
        if ( v12 )
          core::panicking::panic_const::panic_const_rem_by_zero(&off_10B0A8);
        goto LABEL_31;
      }
    }
LABEL_29:
    v21 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    v14 = v31;
LABEL_34:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v30, v14, v18, v19);
    goto LABEL_35;
  }
  v8 = *(_BYTE *)(a1 + 162);
  if ( a3 )
  {
    v9 = a5 - 1;
    v10 = 0LL;
    v11 = v8;
    while ( 1 )
    {
      v30 = 0LL;
      v31 = 1LL;
      v32 = 0LL;
      if ( (std::io::BufRead::read_until(v33, v11, &v30) & 1) != 0 )
        goto LABEL_29;
      if ( !v12 )
        goto LABEL_31;
      v14 = v31;
      if ( (a3 | v10) >> 32 )
      {
        v15 = v10 % a3;
        if ( v10 % a3 != v9 )
          goto LABEL_4;
      }
      else
      {
        v15 = (unsigned int)v10 % (unsigned int)a3;
        if ( (unsigned int)v15 != v9 )
          goto LABEL_4;
      }
      v16 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v37, v31, v32);
      if ( v16 )
      {
        v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        goto LABEL_33;
      }
LABEL_4:
      ++v10;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v30, v14, v15, v13);
    }
  }
  v30 = 0LL;
  v31 = 1LL;
  v32 = 0LL;
  if ( (std::io::BufRead::read_until(v33, v8, &v30) & 1) != 0 )
    goto LABEL_29;
  if ( v12 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_10B090);
LABEL_31:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v30, v31, v12, v13);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v34);
  v21 = 0LL;
LABEL_36:
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v37);
  return v21;
}