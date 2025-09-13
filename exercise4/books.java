package exercise4;

import java.util.ArrayList;

class book {
    String titulo;
    String autor;
    int ano;

    book(String titulo, String autor, int ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }
}

public class books {
    public static void main(String[] args) {
        ArrayList<book> lista = new ArrayList<>();

        lista.add(new book("Lego Batman", "LEGO", 2005));
        lista.add(new book("Lego Star Wars", "LEGO SW", 2009));
        lista.add(new book("Lego Heroes", "LEGO MARVEL", 2012));

        for (book l : lista) {
            System.out.println(l.titulo);
        }
    }
}
