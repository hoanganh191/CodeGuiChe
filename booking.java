package com.example.appviettour;

import java.time.LocalDateTime;

public class Bookings {
    private String booking_id;
    private String user_id;
    private String tour_id;
    private LocalDateTime booking_date;
    private String status;
    private int num_people;
    private int total_amount;

    public Bookings() {
    }

    public Bookings(String booking_id, String user_id, String tour_id, LocalDateTime booking_date, String status, int num_people, int total_amount) {
        this.booking_id = booking_id;
        this.user_id = user_id;
        this.tour_id = tour_id;
        this.booking_date = booking_date;
        this.status = status;
        this.num_people = num_people;
        this.total_amount = total_amount;
    }

    public String getBooking_id() {
        return booking_id;
    }

    public void setBooking_id(String booking_id) {
        this.booking_id = booking_id;
    }

    public String getUser_id() {
        return user_id;
    }

    public void setUser_id(String user_id) {
        this.user_id = user_id;
    }

    public String getTour_id() {
        return tour_id;
    }

    public void setTour_id(String tour_id) {
        this.tour_id = tour_id;
    }

    public LocalDateTime getBooking_date() {
        return booking_date;
    }

    public void setBooking_date(LocalDateTime booking_date) {
        this.booking_date = booking_date;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public int getNum_people() {
        return num_people;
    }

    public void setNum_people(int num_people) {
        this.num_people = num_people;
    }

    public int getTotal_amount() {
        return total_amount;
    }

    public void setTotal_amount(int total_amount) {
        this.total_amount = total_amount;
    }
}
