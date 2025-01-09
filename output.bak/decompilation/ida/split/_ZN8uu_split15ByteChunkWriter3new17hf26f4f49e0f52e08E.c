__int64 __fastcall uu_split::ByteChunkWriter::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // kr00_16
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 *v14; // [rsp+8h] [rbp-110h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+10h] [rbp-108h]
  __int64 v16; // [rsp+18h] [rbp-100h]
  __int128 v17; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v18[40]; // [rsp+30h] [rbp-E8h]
  __int128 v19; // [rsp+58h] [rbp-C0h]
  __int128 *v20; // [rsp+70h] [rbp-A8h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+78h] [rbp-A0h]
  __int64 v22; // [rsp+80h] [rbp-98h]
  __int128 v23; // [rsp+88h] [rbp-90h] BYREF
  __int64 v24; // [rsp+98h] [rbp-80h]
  char v25; // [rsp+A0h] [rbp-78h]
  __int128 v26; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE v27[56]; // [rsp+B8h] [rbp-60h]

  uu_split::filenames::FilenameIterator::new(
    (unsigned __int64 *)&v17,
    *(_QWORD *)(a3 + 48),
    *(_QWORD *)(a3 + 56),
    a3 + 64);
  result = *((_QWORD *)&v17 + 1);
  v5 = *(_QWORD *)v18;
  if ( (_QWORD)v17 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v17 + 1);
    *(_QWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  *(_OWORD *)&v27[40] = v19;
  *(_OWORD *)&v27[24] = *(_OWORD *)&v18[24];
  *(_OWORD *)&v27[8] = *(_OWORD *)&v18[8];
  v26 = v17;
  *(_QWORD *)v27 = *(_QWORD *)v18;
  <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v20, &v26);
  if ( v20 == (__int128 *)0x8000000000000000LL )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v23, aOutputFileSuff, 30LL);
    *(_QWORD *)v18 = v24;
    v17 = v23;
    *(_DWORD *)&v18[8] = 1;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v17);
    *(_QWORD *)(a1 + 16) = &off_148438;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(&v26);
  }
  v6 = (__int64)v21;
  v7 = v22;
  v14 = v20;
  v15 = v21;
  v16 = v22;
  if ( *(_BYTE *)(a3 + 160) )
  {
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = v21;
    v24 = v22;
    v25 = 1;
    v20 = &v23;
    v21 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_1483E0;
    *((_QWORD *)&v17 + 1) = 2LL;
    *(_QWORD *)&v18[16] = 0LL;
    *(_QWORD *)v18 = &v20;
    *(_QWORD *)&v18[8] = 1LL;
    std::io::stdio::_print(&v17);
    v6 = (__int64)v15;
    v7 = v16;
  }
  uu_split::Settings::instantiate_current_writer(&v17, (__int64 *)a3, v6, v7, 1);
  v8 = v17;
  if ( (_QWORD)v17 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v17 + 1));
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    return core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(&v26);
  }
  v10 = *(_OWORD *)v18;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v18[16];
  *(_OWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)&v27[48];
  v11 = v26;
  v12 = *(_OWORD *)v27;
  v13 = *(_OWORD *)&v27[16];
  *(_OWORD *)(a1 + 96) = *(_OWORD *)&v27[32];
  *(_OWORD *)(a1 + 80) = v13;
  *(_OWORD *)(a1 + 64) = v12;
  *(_OWORD *)(a1 + 48) = v11;
  *(_OWORD *)a1 = v8;
  *(_QWORD *)(a1 + 120) = a3;
  *(_QWORD *)(a1 + 128) = a2;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = a2;
  return core::ptr::drop_in_place<alloc::string::String>(&v14);
}
