__int64 __fastcall bat::controller::Controller::run_with_error_handler(__int64 a1, __int64 *a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // r14
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  bool v10; // zf
  char v11; // al
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 result; // rax
  char v15; // al
  __int64 v16; // r14
  _BYTE *v17; // rbx
  int v18; // eax
  char v19; // dl
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  char v22; // bp
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  char v26; // [rsp+4h] [rbp-2A4h]
  __int64 v27; // [rsp+10h] [rbp-298h]
  __int64 v28; // [rsp+18h] [rbp-290h] BYREF
  __int128 v29; // [rsp+20h] [rbp-288h] BYREF
  void *v30; // [rsp+30h] [rbp-278h]
  __int64 *v31; // [rsp+38h] [rbp-270h]
  __int64 v32; // [rsp+40h] [rbp-268h]
  void *v33; // [rsp+48h] [rbp-260h] BYREF
  _BYTE v34[29]; // [rsp+50h] [rbp-258h] BYREF
  char v35; // [rsp+6Dh] [rbp-23Bh]
  _BYTE dest[136]; // [rsp+70h] [rbp-238h] BYREF
  unsigned __int64 v37; // [rsp+F8h] [rbp-1B0h]
  __int128 v38; // [rsp+100h] [rbp-1A8h]
  _BYTE src[144]; // [rsp+118h] [rbp-190h] BYREF
  unsigned __int64 v40; // [rsp+1A8h] [rbp-100h]
  __int128 v41; // [rsp+1B0h] [rbp-F8h]
  __int128 v42; // [rsp+1C0h] [rbp-E8h] BYREF
  __int128 v43; // [rsp+1D0h] [rbp-D8h]
  __int128 v44; // [rsp+1E0h] [rbp-C8h]
  __int128 v45; // [rsp+1F0h] [rbp-B8h]
  __int128 v46; // [rsp+200h] [rbp-A8h]
  _OWORD v47[3]; // [rsp+210h] [rbp-98h] BYREF
  __int64 v48; // [rsp+240h] [rbp-68h]
  _BYTE v49[32]; // [rsp+250h] [rbp-58h] BYREF
  __int64 v50; // [rsp+270h] [rbp-38h]

  v31 = a2;
  v6 = *a2;
  v7 = *(_BYTE *)(*a2 + 298);
  v8 = 2;
  if ( v7 != 2 )
  {
    v9 = *(_QWORD *)(a3 + 8) + 160LL * *(_QWORD *)(a3 + 16);
    *(_QWORD *)src = *(_QWORD *)(a3 + 8);
    *(_QWORD *)&src[8] = v9;
    v10 = (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(src) == 0;
    v8 = 2;
    if ( !v10 )
      v8 = v7;
  }
  bat::output::OutputType::from_mode(
    src,
    v8,
    *(unsigned __int8 *)(v6 + 297),
    *(_QWORD *)(v6 + 272),
    *(_QWORD *)(v6 + 280));
  v11 = src[0];
  if ( src[0] != 13 )
  {
    *(_OWORD *)&dest[47] = *(_OWORD *)&src[48];
    *(_OWORD *)&dest[32] = *(_OWORD *)&src[33];
    *(_OWORD *)&dest[16] = *(_OWORD *)&src[17];
    *(_OWORD *)dest = *(_OWORD *)&src[1];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&src[64];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&dest[47];
    v12 = *(_OWORD *)dest;
    v13 = *(_OWORD *)&dest[16];
    *(_OWORD *)(a1 + 33) = *(_OWORD *)&dest[32];
    *(_OWORD *)(a1 + 17) = v13;
    *(_OWORD *)(a1 + 1) = v12;
    *(_BYTE *)a1 = v11;
    return core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(a3);
  }
  v47[0] = *(_OWORD *)&src[8];
  v47[1] = *(_OWORD *)&src[24];
  v47[2] = *(_OWORD *)&src[40];
  v48 = *(_QWORD *)&src[56];
  v32 = *(_QWORD *)&src[8] - 3LL;
  if ( *(_QWORD *)&src[8] == 5LL )
  {
    clircle::Clircle::stdout(v34);
    if ( a4 )
      goto LABEL_7;
LABEL_12:
    bat::output::OutputType::handle(src, v47);
    v15 = src[0];
    if ( src[0] != 13 )
    {
      v20 = *(_OWORD *)&src[32];
      v21 = *(_OWORD *)&src[48];
      *(_OWORD *)&dest[15] = *(_OWORD *)&src[16];
      *(_OWORD *)dest = *(_OWORD *)&src[1];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&src[64];
      *(_OWORD *)(a1 + 48) = v21;
      *(_OWORD *)(a1 + 32) = v20;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&dest[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)dest;
      *(_BYTE *)a1 = v15;
      v22 = 1;
      goto LABEL_32;
    }
    v27 = a1;
    v29 = *(_OWORD *)&src[8];
    v30 = *(void **)&src[24];
    goto LABEL_15;
  }
  v35 = 2;
  if ( !a4 )
    goto LABEL_12;
LABEL_7:
  v10 = (*a4 & 1) == 0;
  *((_QWORD *)&v29 + 1) = a4 + 8;
  v27 = a1;
  if ( v10 )
  {
    v30 = &unk_6CE250;
    *(_QWORD *)&v29 = 0LL;
  }
  else
  {
    v30 = &unk_6CE2A0;
    *(_QWORD *)&v29 = 1LL;
  }
LABEL_15:
  v33 = &std::io::stdio::stderr::INSTANCE;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v49, a3);
  v50 = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(src, v49);
  v26 = 1;
  if ( *(_DWORD *)&src[8] == 2 )
  {
LABEL_16:
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<bat::input::Input>>>(v49);
    *(_BYTE *)(v27 + 1) = v26;
    *(_BYTE *)v27 = 13;
    core::ptr::drop_in_place<core::option::Option<clircle::Identifier>>(v34);
    return core::ptr::drop_in_place<bat::output::OutputType>(v47);
  }
  v26 = 1;
  while ( 1 )
  {
    v16 = *(_QWORD *)src;
    v17 = v34;
    if ( v35 == 2 )
      v17 = 0LL;
    memcpy(dest, &src[8], sizeof(dest));
    if ( v40 == 0x8000000000000000LL )
    {
      v37 = 0x8000000000000000LL;
      v38 = v41;
      v28 = std::io::stdio::stdin(dest);
      v18 = std::io::stdio::Stdin::lock(&v28);
      bat::controller::Controller::print_input(
        (unsigned int)&v42,
        (_DWORD)v31,
        (unsigned int)dest,
        (unsigned int)&v29,
        v18,
        v19 & 1,
        (__int64)v17,
        v16 == 0);
    }
    else
    {
      v37 = v40;
      v38 = v41;
      bat::controller::Controller::print_input(&v42, v31, dest, &v29, v17, *(_QWORD *)src == 0LL);
    }
    if ( (_BYTE)v42 == 13 )
      goto LABEL_20;
    *(_OWORD *)&dest[64] = v46;
    *(_OWORD *)&dest[48] = v45;
    *(_OWORD *)&dest[32] = v44;
    *(_OWORD *)&dest[16] = v43;
    *(_OWORD *)dest = v42;
    if ( (_DWORD)v29 == 1 )
      break;
    if ( v32 == 2 )
    {
      v28 = std::io::stdio::Stdout::lock(&v33);
      core::ops::function::FnMut::call_mut(dest, &v28, &off_6CE2D0);
      core::ptr::drop_in_place<std::io::stdio::StderrLock>(&v28);
    }
    else
    {
      core::ops::function::FnMut::call_mut(dest, (char *)&v29 + 8, &unk_6CE250);
    }
    core::ptr::drop_in_place<bat::error::Error>(dest);
    v26 = 0;
LABEL_20:
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(src, v49);
    if ( *(_DWORD *)&src[8] == 2 )
      goto LABEL_16;
  }
  *(_OWORD *)(v27 + 64) = v46;
  v23 = v42;
  v24 = v43;
  v25 = v44;
  *(_OWORD *)(v27 + 48) = v45;
  *(_OWORD *)(v27 + 32) = v25;
  *(_OWORD *)(v27 + 16) = v24;
  *(_OWORD *)v27 = v23;
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<bat::input::Input>>>(v49);
  v22 = 0;
LABEL_32:
  core::ptr::drop_in_place<core::option::Option<clircle::Identifier>>(v34);
  result = core::ptr::drop_in_place<bat::output::OutputType>(v47);
  if ( v22 )
    return core::ptr::drop_in_place<alloc::vec::Vec<bat::input::Input>>(a3);
  return result;
}