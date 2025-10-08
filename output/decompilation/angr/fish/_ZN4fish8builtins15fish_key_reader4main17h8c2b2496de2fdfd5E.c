void fish::builtins::fish_key_reader::main()
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long long
    char v1;  // [bp-0x8]

    v0.try_insert("f", 15);
    v0.unwrap(*((long long *)&v1), &g_14c9b90);
    fish::panic::panic_handler(); /* do not return */
}
