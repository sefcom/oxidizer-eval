__int64 __fastcall uu_dircolors::escape(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  int v5; // ecx
  int code_point; // eax
  int v7; // ebp
  void *v8; // rdi
  const char *v9; // rsi
  __int64 slice; // rax
  __int128 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 1LL;
  v13 = 0LL;
  v14[0] = a2;
  v14[1] = a2 + a3;
  if ( (unsigned int)core::str::validations::next_code_point(v14) )
  {
    v5 = 32;
    while ( 1 )
    {
      v7 = v4;
      if ( v4 == 39 )
        break;
      if ( v4 == 58 && v5 != 92 )
      {
        v8 = &unk_23625;
        v9 = aConfigurationF;
LABEL_10:
        slice = core::slice::iter::Iter<T>::make_slice(v8, v9);
        alloc::vec::Vec<T,A>::append_elements(&v12, slice);
        goto LABEL_4;
      }
      alloc::string::String::push(&v12, v4);
LABEL_4:
      code_point = core::str::validations::next_code_point(v14);
      v5 = v7;
      if ( !code_point )
        goto LABEL_11;
    }
    v8 = &unk_16D80;
    v9 = anon_82c3ed8cdb07ba982e54791b0c97d0cf_178_llvm_541762227079851447;
    goto LABEL_10;
  }
LABEL_11:
  *(_QWORD *)(a1 + 16) = v13;
  *(_OWORD *)a1 = v12;
  return a1;
}
