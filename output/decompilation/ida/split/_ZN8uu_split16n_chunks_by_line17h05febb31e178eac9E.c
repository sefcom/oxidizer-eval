__int64 __fastcall uu_split::n_chunks_by_line(
        __int64 a1,
        void *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char input_size; // al
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r13
  unsigned __int8 v15; // dl
  __int64 v16; // r14
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  bool v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int8 v32; // [rsp+Fh] [rbp-119h]
  char v33; // [rsp+Fh] [rbp-119h]
  __int64 v34; // [rsp+10h] [rbp-118h]
  void *v35; // [rsp+18h] [rbp-110h]
  __int64 v36; // [rsp+20h] [rbp-108h]
  unsigned int v37; // [rsp+20h] [rbp-108h]
  __int64 v38; // [rsp+28h] [rbp-100h] BYREF
  __int64 v39; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-F0h]
  void *v41; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v42; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v43; // [rsp+50h] [rbp-D8h]
  __int64 v44; // [rsp+58h] [rbp-D0h]
  __int64 v45; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-C0h]
  __int64 v47; // [rsp+70h] [rbp-B8h]
  __int64 v48; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v51; // [rsp+90h] [rbp-98h]
  unsigned __int64 v52; // [rsp+98h] [rbp-90h]
  __int64 v53; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-80h]
  __int64 v55; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v56; // [rsp+B8h] [rbp-70h]
  void *v57; // [rsp+C0h] [rbp-68h]
  char v58; // [rsp+C8h] [rbp-60h]
  unsigned __int8 v59; // [rsp+D0h] [rbp-58h]
  __int64 v60; // [rsp+D8h] [rbp-50h]
  __int64 v61; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-40h]
  __int64 v63; // [rsp+F0h] [rbp-38h]

  v52 = a5;
  v48 = 0LL;
  v49 = 1LL;
  v50 = 0LL;
  input_size = uu_split::get_input_size(a1 + 112, a2, (__int64)&v48, *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  v10 = v8;
  if ( (input_size & 1) != 0 )
  {
    v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
    v12 = v49;
    goto LABEL_47;
  }
  v34 = v49;
  v13 = v50;
  if ( !v8 && (a4 || *(_BYTE *)(a1 + 161)) )
  {
LABEL_39:
    v11 = 0LL;
    goto LABEL_46;
  }
  v55 = std::io::stdio::stdout();
  v43 = v13;
  v38 = std::io::stdio::Stdout::lock(&v55);
  v39 = 0LL;
  v40 = 8LL;
  v41 = 0LL;
  if ( !a3 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_10B060);
  if ( !((a3 | v10) >> 32) )
  {
    v42 = (unsigned int)v10 % (unsigned int)a3;
    v14 = (unsigned int)v10 / (unsigned int)a3;
    if ( a4 )
      goto LABEL_7;
LABEL_12:
    v32 = *(_BYTE *)(a1 + 161);
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v55, a3, a1, v32);
    v16 = v55;
    v36 = v56;
    v35 = v57;
    if ( v55 == 0x8000000000000000LL )
    {
      v11 = v56;
      goto LABEL_45;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v39);
    v51 = v10;
    v39 = v16;
    v40 = v36;
    v41 = v35;
    v15 = v32;
    goto LABEL_15;
  }
  v42 = v10 % a3;
  v14 = v10 / a3;
  if ( !a4 )
    goto LABEL_12;
LABEL_7:
  v51 = v10;
  v15 = *(_BYTE *)(a1 + 161);
LABEL_15:
  v17 = *(_BYTE *)(a1 + 162);
  v18 = v14 - ((v42 == 0) - 1LL);
  v55 = v34;
  v56 = v43;
  v57 = a2;
  v58 = 0;
  v59 = v17;
  v60 = *(_QWORD *)(a1 + 136);
  v33 = v15 ^ 1;
  v19 = 1LL;
  v43 = 0x8000000000000001LL;
  v37 = v17;
  v20 = 0LL;
  v44 = a4;
  while ( 1 )
  {
    <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v61, &v55);
    if ( v61 == v43 )
    {
LABEL_38:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v39);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v38);
      goto LABEL_39;
    }
    v25 = v62;
    if ( v61 == 0x8000000000000000LL )
    {
      v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v62);
      goto LABEL_45;
    }
    v26 = v63;
    v45 = v61;
    v46 = v62;
    v47 = v63;
    if ( v63 + v20 < v51 )
    {
      alloc::vec::Vec<T,A>::push(&v45, v37, &off_10B078);
      v25 = v46;
      v26 = v47;
    }
    if ( (v44 & 1) == 0 )
      break;
    if ( v19 == v52 )
    {
      v27 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v38, v25, v26);
      if ( v27 )
      {
        v28 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
        goto LABEL_43;
      }
    }
LABEL_34:
    v20 += v26;
    LODWORD(v22) = -1;
    if ( v18 > v20 )
    {
      v21 = v44;
    }
    else
    {
      v21 = v44;
      do
      {
        v18 += v14 + (v19++ < v42);
        LODWORD(v22) = v22 + 1;
      }
      while ( v18 <= v20 );
    }
    v22 = (unsigned int)v22;
    if ( (int)v22 <= 0 )
      v22 = 0LL;
    if ( (v33 & 1) != 0 )
      v22 = 0LL;
    if ( v21 )
      v22 = 0LL;
    v19 -= v22;
    v23 = v19 > v52;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v45, v46, v24, 0LL);
    if ( (v23 & (unsigned __int8)v21) != 0 )
      goto LABEL_38;
  }
  <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v53, &v39, v19 - 1, a1);
  v30 = v54;
  if ( v53 )
  {
    v11 = v53;
    goto LABEL_44;
  }
  uu_split::custom_write_all((__int64)&v53, v25, v26, v54, v60);
  if ( (_BYTE)v53 != 1 )
    goto LABEL_34;
  v28 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v54);
LABEL_43:
  v11 = v28;
LABEL_44:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v45, v46, v29, v30);
LABEL_45:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v39);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v38);
LABEL_46:
  v12 = v34;
LABEL_47:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v48, v12, v8, v9);
  return v11;
}