__int64 __fastcall ruff_python_formatter::comments::placement::handle_parameters_separator_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rdi
  char *v10; // rsi
  unsigned int v11; // ebp
  unsigned __int8 v12; // r15
  __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // [rsp+0h] [rbp-88h] BYREF
  int v18; // [rsp+10h] [rbp-78h]
  __int128 v19; // [rsp+20h] [rbp-68h] BYREF
  int v20; // [rsp+30h] [rbp-58h]
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF
  int v22; // [rsp+50h] [rbp-38h]
  __int128 v23; // [rsp+54h] [rbp-34h]
  int v24; // [rsp+64h] [rbp-24h]

  ruff_python_formatter::other::parameters::find_parameter_separators(&v21, a4, a5, a3);
  v18 = v22;
  v17 = v21;
  v20 = v24;
  v9 = (char *)&v17 + 4;
  if ( !(_BYTE)v21 )
    v9 = 0LL;
  v19 = v23;
  v10 = (char *)&v19 + 4;
  if ( !(_BYTE)v23 )
    v10 = 0LL;
  v11 = *((_DWORD *)a2 + 16);
  v12 = *((_BYTE *)a2 + 72);
  result = ruff_python_formatter::other::parameters::assign_argument_separator_comment_placement(
             v9,
             v10,
             v11,
             v12,
             v7,
             v8,
             *(double *)&v23,
             v17,
             *((_QWORD *)&v17 + 1),
             v18);
  if ( (_BYTE)result == 4 )
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v14 = *a2;
    v15 = a2[1];
    v16 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
  }
  else
  {
    result = *((unsigned int *)a2 + 17);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 24) = v11;
    *(_DWORD *)(a1 + 28) = result;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v12;
    *(_QWORD *)a1 = 96LL;
  }
  return result;
}