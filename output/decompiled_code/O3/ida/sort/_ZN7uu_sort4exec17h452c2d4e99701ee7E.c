__int64 __fastcall uu_sort::exec(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v15; // [rsp+18h] [rbp-E0h]
  __int128 v16; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v17[10]; // [rsp+30h] [rbp-C8h]
  __int128 v18; // [rsp+80h] [rbp-78h] BYREF
  __int64 v19; // [rsp+90h] [rbp-68h]
  __int128 v20; // [rsp+98h] [rbp-60h]
  __int128 v21; // [rsp+A8h] [rbp-50h]
  __int128 v22; // [rsp+B8h] [rbp-40h]
  __int128 v23; // [rsp+C8h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-20h]

  if ( *(_BYTE *)(a3 + 129) )
  {
    if ( *a4 == 0x8000000000000000LL )
      LODWORD(v7) = 0;
    else
      v7 = a4[1];
    uu_sort::merge::merge((unsigned int)&v16, a1, a2, a3, v7, a4[2], a5);
    if ( (_QWORD)v16 == 3LL )
    {
      v9 = a4;
      v10 = *((_QWORD *)&v16 + 1);
      core::ptr::drop_in_place<uu_sort::Output>(v9);
      return v10;
    }
    else
    {
      v24 = v17[9];
      v23 = *(_OWORD *)&v17[7];
      v22 = *(_OWORD *)&v17[5];
      v21 = *(_OWORD *)&v17[3];
      v20 = *(_OWORD *)&v17[1];
      v18 = v16;
      v19 = v17[0];
      v12 = *(_OWORD *)a4;
      *(_OWORD *)v17 = *((_OWORD *)a4 + 1);
      v16 = v12;
      return uu_sort::merge::FileMerger::write_all(&v18, a3, &v16);
    }
  }
  else if ( *(_BYTE *)(a3 + 133) )
  {
    if ( a2 <= 1 )
    {
      if ( a2 != 1 )
        core::option::unwrap_failed(&off_1FF1D8);
      v8 = uu_sort::check::check(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a3);
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v14, aOnlyOneFileAll, 29LL);
      v17[0] = v15;
      v16 = v14;
      LODWORD(v17[1]) = 2;
      v8 = alloc::boxed::Box<T>::new(&v16);
    }
    core::ptr::drop_in_place<uu_sort::Output>(a4);
    return v8;
  }
  else
  {
    *(_QWORD *)&v14 = a1;
    *((_QWORD *)&v14 + 1) = a1 + 24 * a2;
    v13 = *(_OWORD *)a4;
    *(_OWORD *)v17 = *((_OWORD *)a4 + 1);
    v16 = v13;
    return uu_sort::ext_sort::ext_sort(&v14, a3, &v16, a5);
  }
}
