
struct State {
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    // The node responds only if there is an input pulse
    if (!isInputDirty<input_UPD>(ctx))
        return;

    // Get a pointer to the `Adafruit_SSD1306` class instance
    auto display = getValue<input_DEV>(ctx);

    auto invert_display = getValue<input_INV>(ctx);

    display->invertDisplay(invert_display);

    emitValue<output_DONE>(ctx, 1);
}
