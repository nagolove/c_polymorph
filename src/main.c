#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

struct Base_Buffer {
    void (*base_buffer_fill_from_string)(struct Base_Buffer *buf, const char *str);
    void (*free)(struct Base_Buffer *buf);
};

void base_buffer_fill_from_string(struct Base_Buffer *buf, const char *str) {
    // рабочий метод
}

void base_buffer_free(struct Base_Buffer *buf) {
    if (buf) free(buf);
}

struct Base_Buffer *base_buffer_init() {
    size_t size = sizeof(struct Base_Buffer);
    struct Base_Buffer *buf = (struct Base_Buffer*)calloc(1, size);
    // инициялизация
    buf->base_buffer_fill_from_string = base_buffer_fill_from_string;
    buf->free = base_buffer_free;
    return buf;
}

/*typedef int MySuperType;*/

struct Detailed_Buffer {
};

int main(void)
{
    struct Base_Buffer *data = base_buffer_init();

    data->base_buffer_fill_from_string(data, "lalalalalal");
    data->free(data);

    assert(false && "упало и пропал");
    return EXIT_SUCCESS;
}
