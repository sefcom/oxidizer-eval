__int64 __fastcall uu_split::n_chunks_by_line(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v6; // r13
  __int64 input_size; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  void *v13; // r12
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned __int8 v25; // [rsp+7h] [rbp-111h]
  __int64 v27; // [rsp+10h] [rbp-108h] BYREF
  __int64 v28; // [rsp+18h] [rbp-100h] BYREF
  __int64 v29; // [rsp+20h] [rbp-F8h]
  void *v30; // [rsp+28h] [rbp-F0h]
  void *v31; // [rsp+30h] [rbp-E8h]
  __int64 v32; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v33; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+50h] [rbp-C8h]
  __int64 v36; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-B8h]
  __int64 v38; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+70h] [rbp-A8h]
  __int64 v40; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+80h] [rbp-98h]
  __int64 v42; // [rsp+88h] [rbp-90h]
  __int64 v43; // [rsp+90h] [rbp-88h] BYREF
  __int64 v44; // [rsp+98h] [rbp-80h]
  __int64 v45; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-70h]
  void *v47; // [rsp+B0h] [rbp-68h]
  char v48; // [rsp+B8h] [rbp-60h]
  unsigned __int8 v49; // [rsp+C0h] [rbp-58h]
  __int64 v50; // [rsp+C8h] [rbp-50h]
  __int64 v51; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-40h]
  __int64 v53; // [rsp+E0h] [rbp-38h]

  v35 = a5;
  v6 = a1;
  v40 = 0LL;
  v41 = 1LL;
  v42 = 0LL;
  input_size = uu_split::get_input_size(a1 + 112, a2, (__int64)&v40, *(_QWORD *)v6, *(_QWORD *)(v6 + 8));
  v9 = v8;
  if ( input_size )
  {
    v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
    goto LABEL_44;
  }
  v34 = v41;
  v32 = v42;
  if ( !v8 )
  {
    v10 = 0LL;
    if ( a4 == 1 || *(_BYTE *)(a1 + 161) )
      goto LABEL_44;
  }
  v45 = std::io::stdio::stdout();
  v27 = std::io::stdio::Stdout::lock(&v45);
  v28 = 0LL;
  v29 = 8LL;
  v30 = 0LL;
  if ( !a3 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_1485A0);
  v31 = a2;
  if ( !((a3 | v9) >> 32) )
  {
    v33 = (unsigned int)v9 % (unsigned int)a3;
    v11 = (unsigned int)v9 / (unsigned int)a3;
    if ( a4 == 1 )
      goto LABEL_9;
LABEL_11:
    v25 = *(_BYTE *)(a1 + 161);
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v45, a3, a1, v25);
    v12 = v45;
    v10 = v46;
    v13 = v47;
    if ( v45 == 0x8000000000000000LL )
      goto LABEL_43;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v28);
    v39 = v9;
    v28 = v12;
    v29 = v10;
    v30 = v13;
    v6 = a1;
    goto LABEL_13;
  }
  v33 = v9 % a3;
  v11 = v9 / a3;
  if ( a4 != 1 )
    goto LABEL_11;
LABEL_9:
  v39 = v9;
  v25 = *(_BYTE *)(a1 + 161);
LABEL_13:
  v14 = *(_BYTE *)(v6 + 162);
  v15 = v11 - ((v33 == 0) - 1LL);
  v45 = v34;
  v46 = v32;
  v47 = v31;
  v48 = 0;
  v49 = v14;
  v31 = (void *)v6;
  v50 = *(_QWORD *)(v6 + 136);
  v16 = 1LL;
  v17 = 0LL;
  v34 = 0x8000000000000001LL;
  LODWORD(v32) = v14;
  while ( 1 )
  {
    <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v51, &v45);
    if ( v51 == v34 )
      goto LABEL_36;
    v18 = v52;
    if ( v51 == 0x8000000000000000LL )
    {
      v10 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v52);
      goto LABEL_43;
    }
    v19 = v53;
    v36 = v51;
    v37 = v52;
    v38 = v53;
    if ( v53 + v17 < v39 )
    {
      alloc::vec::Vec<T,A>::push(&v36, (unsigned int)v32);
      v18 = v37;
      v19 = v38;
    }
    if ( !a4 )
      break;
    if ( v16 == v35 )
    {
      v20 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v27, v18, v19);
      if ( v20 )
      {
        v23 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        goto LABEL_41;
      }
    }
LABEL_26:
    v17 += v19;
    if ( v15 > v17 )
      goto LABEL_27;
    v21 = -1;
    v22 = -2;
    do
    {
      v15 += v11 + (v16++ < v33);
      ++v21;
      ++v22;
    }
    while ( v15 <= v17 );
    if ( v25 && v22 < 0x7FFFFFFF )
    {
      if ( a4 != 1 )
      {
        v16 -= v21;
        goto LABEL_15;
      }
    }
    else
    {
LABEL_27:
      if ( a4 != 1 )
        goto LABEL_15;
    }
    if ( v16 > v35 )
    {
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v36);
LABEL_36:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v28);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v27);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v40);
      return 0LL;
    }
LABEL_15:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v36);
  }
  <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v43, &v28, v16 - 1, v31);
  if ( v43 )
  {
    v10 = v43;
    goto LABEL_42;
  }
  uu_split::custom_write_all((__int64)&v43, v18, v19, v44, v50);
  if ( !(_BYTE)v43 )
    goto LABEL_26;
  v23 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v44);
LABEL_41:
  v10 = v23;
LABEL_42:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v36);
LABEL_43:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v28);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v27);
LABEL_44:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v40);
  return v10;
}
