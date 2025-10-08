__int64 __fastcall uu_split::LineChunkWriter::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v14[56]; // [rsp+18h] [rbp-A0h]
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v16[40]; // [rsp+60h] [rbp-58h]
  __int128 v17; // [rsp+88h] [rbp-30h]

  uu_split::filenames::FilenameIterator::new((__int64)&v15, *(_QWORD *)(a3 + 48), *(_QWORD *)(a3 + 56), a3 + 64);
  result = *((_QWORD *)&v15 + 1);
  v6 = *(_QWORD *)v16;
  if ( (_QWORD)v15 == 0x8000000000000001LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v15 + 1);
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    *(_OWORD *)&v14[40] = v17;
    *(_OWORD *)&v14[24] = *(_OWORD *)&v16[24];
    *(_OWORD *)&v14[8] = *(_OWORD *)&v16[8];
    v13 = v15;
    *(_QWORD *)v14 = *(_QWORD *)v16;
    uu_split::LineChunkWriter::start_new_chunk(&v15, a3, &v13);
    v7 = *((_QWORD *)&v15 + 1);
    result = v15;
    if ( (_QWORD)v15 == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v15 + 1));
      *(_QWORD *)(a1 + 16) = v8;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<uu_split::filenames::FilenameIterator>(v13, *((_QWORD *)&v13 + 1));
    }
    else
    {
      v9 = *(_OWORD *)v16;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v16[16];
      *(_OWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 112) = *(_QWORD *)&v14[48];
      v10 = v13;
      v11 = *(_OWORD *)v14;
      v12 = *(_OWORD *)&v14[16];
      *(_OWORD *)(a1 + 96) = *(_OWORD *)&v14[32];
      *(_OWORD *)(a1 + 80) = v12;
      *(_OWORD *)(a1 + 64) = v11;
      *(_OWORD *)(a1 + 48) = v10;
      *(_QWORD *)a1 = result;
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 120) = a3;
      *(_QWORD *)(a1 + 128) = a2;
      *(_QWORD *)(a1 + 136) = 0LL;
      *(_QWORD *)(a1 + 144) = a2;
    }
  }
  return result;
}