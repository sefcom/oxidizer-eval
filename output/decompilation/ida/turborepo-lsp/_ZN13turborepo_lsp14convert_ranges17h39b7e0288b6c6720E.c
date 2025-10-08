_DWORD *__fastcall turborepo_lsp::convert_ranges(_DWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // r12d
  int v9; // r15d
  int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-38h]

  v5 = a3;
  v6 = *a2;
  v7 = crop::rope::rope::Rope::line_of_byte(*a2, a3, &off_92F668);
  v12 = crop::rope::rope::Rope::line_of_byte(v6, a4, &off_92F680);
  v8 = *((_DWORD *)a2 + 2);
  v9 = v5 - crop::rope::rope::Rope::byte_of_line(v6, v8, v7, &off_92F698);
  v10 = crop::rope::rope::Rope::byte_of_line(v6, v8, v12, &off_92F6B0);
  *a1 = v7;
  a1[1] = v9;
  a1[2] = v12;
  a1[3] = a4 - v10;
  return a1;
}