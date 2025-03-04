__int64 __fastcall uu_sort::ext_sort::write(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int128 v12; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v13[40]; // [rsp+10h] [rbp-88h]
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-48h]

  <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v12, a3);
  result = *((_QWORD *)&v12 + 1);
  v8 = *(_QWORD *)v13;
  if ( (_QWORD)v12 == 0x8000000000000000LL )
  {
    a1[1] = *((_QWORD *)&v12 + 1);
    a1[2] = v8;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    *(_OWORD *)&v15[24] = *(_OWORD *)&v13[24];
    *(_OWORD *)&v15[8] = *(_OWORD *)&v13[8];
    v14 = v12;
    *(_QWORD *)v15 = *(_QWORD *)v13;
    v9 = *(_QWORD *)(a2 + 32);
    v10 = *(_QWORD *)(a2 + 40);
    v11 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v14);
    uu_sort::ext_sort::write_lines(v9, v10, v11, a6);
    *(_QWORD *)&v13[32] = *(_QWORD *)&v15[32];
    *(_OWORD *)&v13[16] = *(_OWORD *)&v15[16];
    *(_OWORD *)v13 = *(_OWORD *)v15;
    v12 = v14;
    return <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a1, &v12);
  }
  return result;
}
