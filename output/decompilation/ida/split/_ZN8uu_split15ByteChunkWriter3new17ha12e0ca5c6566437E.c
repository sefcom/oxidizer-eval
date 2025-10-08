__int64 __fastcall uu_split::ByteChunkWriter::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int128 v9; // kr00_16
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rax
  __int64 (__fastcall *v16)(); // [rsp+8h] [rbp-110h]
  __int128 v17; // [rsp+10h] [rbp-108h] BYREF
  _BYTE v18[40]; // [rsp+20h] [rbp-F8h]
  __int128 v19; // [rsp+48h] [rbp-D0h]
  __int64 v20; // [rsp+60h] [rbp-B8h]
  __int128 *v21; // [rsp+68h] [rbp-B0h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+70h] [rbp-A8h]
  __int64 v23; // [rsp+78h] [rbp-A0h]
  __int128 v24; // [rsp+80h] [rbp-98h] BYREF
  __int64 v25; // [rsp+90h] [rbp-88h]
  char v26; // [rsp+98h] [rbp-80h]
  __int128 v27; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v28[56]; // [rsp+B0h] [rbp-68h]

  uu_split::filenames::FilenameIterator::new((__int64)&v17, *(_QWORD *)(a3 + 48), *(_QWORD *)(a3 + 56), a3 + 64);
  result = *((_QWORD *)&v17 + 1);
  v5 = *(_QWORD *)v18;
  if ( (_QWORD)v17 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v17 + 1);
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v20 = a2;
  *(_OWORD *)&v28[40] = v19;
  *(_OWORD *)&v28[24] = *(_OWORD *)&v18[24];
  *(_OWORD *)&v28[8] = *(_OWORD *)&v18[8];
  v27 = v17;
  *(_QWORD *)v28 = *(_QWORD *)v18;
  <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v21, &v27);
  v6 = v21;
  if ( v21 == (__int128 *)0x8000000000000000LL )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, aOutputFileSuff, 30LL);
    *(_QWORD *)v18 = v25;
    v17 = v24;
    *(_DWORD *)&v18[8] = 1;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v17);
    *(_QWORD *)(a1 + 16) = &off_10AB40;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v27, *((_QWORD *)&v27 + 1));
  }
  v7 = (__int64)v22;
  v8 = v23;
  v16 = v22;
  if ( *(_BYTE *)(a3 + 160) )
  {
    *(_QWORD *)&v24 = 0LL;
    *((_QWORD *)&v24 + 1) = v22;
    v25 = v23;
    v26 = 1;
    v21 = &v24;
    v22 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_10AF08;
    *((_QWORD *)&v17 + 1) = 2LL;
    *(_QWORD *)&v18[16] = 0LL;
    *(_QWORD *)v18 = &v21;
    *(_QWORD *)&v18[8] = 1LL;
    std::io::stdio::_print(&v17);
    v7 = (__int64)v16;
  }
  uu_split::Settings::instantiate_current_writer(&v17, (__int64 *)a3, v7, v8, 1);
  v9 = v17;
  if ( (_QWORD)v17 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v17 + 1));
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::string::String>(v6, v16);
    return core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v27, *((_QWORD *)&v27 + 1));
  }
  v11 = *(_OWORD *)v18;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v18[16];
  *(_OWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)&v28[48];
  v12 = v27;
  v13 = *(_OWORD *)v28;
  v14 = *(_OWORD *)&v28[16];
  *(_OWORD *)(a1 + 96) = *(_OWORD *)&v28[32];
  *(_OWORD *)(a1 + 80) = v14;
  *(_OWORD *)(a1 + 64) = v13;
  *(_OWORD *)(a1 + 48) = v12;
  *(_OWORD *)a1 = v9;
  *(_QWORD *)(a1 + 120) = a3;
  v15 = v20;
  *(_QWORD *)(a1 + 128) = v20;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = v15;
  return core::ptr::drop_in_place<alloc::string::String>(v6, v16);
}