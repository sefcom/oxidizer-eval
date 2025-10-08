__int64 __fastcall bat::terminal::as_terminal_escaped(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int8 a8,
        unsigned __int64 a9)
{
  int v10; // r15d
  unsigned __int8 v11; // bp
  __int64 v12; // r13
  int v13; // eax
  char v14; // bl
  bool v15; // r13
  char v16; // bp
  __int64 v18; // rsi
  __int64 v19; // r12
  int v20; // eax
  unsigned int v21; // [rsp+Ch] [rbp-7Ch]
  int v22; // [rsp+Ch] [rbp-7Ch]
  _QWORD v23[6]; // [rsp+10h] [rbp-78h] BYREF
  char v24; // [rsp+40h] [rbp-48h]
  char v25; // [rsp+41h] [rbp-47h]
  char v26; // [rsp+42h] [rbp-46h]
  bool v27; // [rsp+43h] [rbp-45h]
  int v28; // [rsp+44h] [rbp-44h]
  char v29; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+49h] [rbp-3Fh]
  int v31; // [rsp+4Dh] [rbp-3Bh]

  if ( !a5 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
  v10 = 21;
  v21 = a6;
  if ( a7 )
  {
    v11 = a3;
    v12 = a4;
    v13 = bat::terminal::to_ansi_color(a2, a6, a8);
    a4 = v12;
    v14 = v11 & 1;
    v15 = (v11 & 2) != 0;
    v16 = a8 & (v11 >> 2);
    if ( (a9 & 1) == 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v13 = 21;
  if ( (a9 & 1) != 0 )
  {
LABEL_7:
    v18 = v21;
    v19 = a4;
    v22 = v13;
    v20 = bat::terminal::to_ansi_color((unsigned int)(a9 >> 8), v18, a3);
    a4 = v19;
    v10 = v20;
    v13 = v22;
  }
LABEL_8:
  v24 = v14;
  v25 = 0;
  v26 = v16;
  v27 = v15;
  v28 = 0;
  v29 = 0;
  v30 = v13;
  v31 = v10;
  v23[0] = 0x8000000000000000LL;
  v23[1] = a4;
  v23[2] = a5;
  v23[3] = 0x8000000000000002LL;
  <T as alloc::string::SpecToString>::spec_to_string(a1, v23);
  return core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v23);
}